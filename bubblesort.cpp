//
// Created by tanmaygairola on 8/26/20.
//
// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main() {
	int arr[100000];
	double time;
	for (int i = 0; i < 100000; i++) {
		arr[i] = rand() % 100000000000;
	}
	ofstream f;
	f.open("../data_bubble.csv");
	f << "Size of the array, " << "Time taken" << endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int p = 100; p < 100000; p += 100) {
		clock_t start = clock();
		bubbleSort(arr, p - 1);
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

