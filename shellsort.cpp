//
// Created by tanmaygairola on 8/27/20.
//
#include  <iostream>
#include <time.h>
#include <fstream>

using namespace std;


int shellSort(int arr[], int n) {

	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i += 1) {
			int temp = arr[i];


			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];


			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main() {
	int arr[100000];
	double time;
	for (int i = 0; i < 100000; i++) {
		arr[i] = rand() % 100000000000;
	}
	ofstream f;
	f.open("../data_shell.csv");
	f << "Size of the array, " << "Time taken" << endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int p = 100; p < 100000; p += 100) {
		clock_t start = clock();
		shellSort(arr, p - 1);
		start = clock() - start;
		time = float(start) / CLOCKS_PER_SEC;
		cout << "Time taken\t" << time << "\t";
		cout << "Size of array\t" << p << endl;
		f << p << ", " << time << endl;
	}
	f.close();
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}


