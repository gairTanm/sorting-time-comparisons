//
// Created by tanmaygairola on 8/26/20.
//

#include<iostream>
#include <fstream>
#include <time.h>

using namespace std;


int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

void countSort(int arr[], int n, int exp)
{
	int output[n]; // output array
	int i, count[10] = {0};


	for (i = 0; i < n; i++)
		count[ (arr[i]/exp)%10 ]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];


	for (i = n - 1; i >= 0; i--)
	{
		output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
		count[ (arr[i]/exp)%10 ]--;
	}


	for (i = 0; i < n; i++)
		arr[i] = output[i];
}


void radixSort(int arr[], int n)
{

	int m = getMax(arr, n);


	for (int exp = 1; m/exp > 0; exp *= 10)
		countSort(arr, n, exp);
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}


int main()
{
	int arr[100000];
	double time;
	for (int i = 0; i < 100000; i++) {
		arr[i] = rand() % 100000000000;
	}
	ofstream f;
	f.open("../data_radix.csv");
	f<<"Size of the array, "<<"Time taken"<<endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int p = 100; p < 100000; p += 100) {
		clock_t start = clock();
		radixSort(arr, p - 1);
		start = clock() - start;
		time = float(start) / CLOCKS_PER_SEC;
		cout << "Time taken\t" << time << "\t";
		cout << "Size of array\t" << p << endl;
		f<<p<<", "<<time<<endl;
	}
	f.close();
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

