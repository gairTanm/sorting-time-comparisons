#include<iostream>
#include<fstream>
#include <time.h>

using namespace std;

void printArray(int *array, int size) {
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

void merge(int *array, int l, int m, int r) {
	int i, j, k, nl, nr;

	nl = m - l + 1;
	nr = r - m;
	int larr[nl], rarr[nr];

	for (i = 0; i < nl; i++)
		larr[i] = array[l + i];
	for (j = 0; j < nr; j++)
		rarr[j] = array[m + 1 + j];
	i = 0;
	j = 0;
	k = l;

	while (i < nl && j < nr) {
		if (larr[i] <= rarr[j]) {
			array[k] = larr[i];
			i++;
		} else {
			array[k] = rarr[j];
			j++;
		}
		k++;
	}
	while (i < nl) {
		array[k] = larr[i];
		i++;
		k++;
	}
	while (j < nr) {
		array[k] = rarr[j];
		j++;
		k++;
	}
}

void mergeSort(int *array, int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;

		mergeSort(array, l, m);
		mergeSort(array, m + 1, r);
		merge(array, l, m, r);
	}
}

int main() {
	int arr[100000];
	double time;
	for (int i = 0; i < 100000; i++) {
		arr[i] = rand() % 100000000000;
	}
	ofstream f;
	f.open("../data_merge.csv");
	f << "Size of the array, " << "Time taken" << endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int p = 100; p < 100000; p += 100) {
		clock_t start = clock();
		mergeSort(arr, 0, p - 1);
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