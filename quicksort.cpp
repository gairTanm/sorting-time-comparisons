#include<bits/stdc++.h>

using namespace std;

int partition(int *a, int start, int end) {
	int pivot = a[end];


	int P_index = start;
	int i, t;


	for (i = start; i < end; i++) {
		if (a[i] <= pivot) {
			t = a[i];
			a[i] = a[P_index];
			a[P_index] = t;
			P_index++;
		}
	}

	t = a[end];
	a[end] = a[P_index];
	a[P_index] = t;


	return P_index;
}

void quickSort(int *a, int start, int end) {
	if (start < end) {
		int P_index = partition(a, start, end);
		quickSort(a, start, P_index - 1);
		quickSort(a, P_index + 1, end);
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[100000];
	double time;
	for (int i = 0; i < 100000; i++) {
		arr[i] = rand() % 100000000000;
	}
	ofstream f;
	f.open("../data_quick.csv");
	f << "Size of the array, " << "Time taken" << endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int p = 100; p < 100000; p += 100) {
		clock_t start = clock();
		std::qsort(arr, p, sizeof *arr, [](const void* a, const void* b)
		{
			int arg1 = *static_cast<const int*>(a);
			int arg2 = *static_cast<const int*>(b);

			if(arg1 < arg2) return -1;
			if(arg1 > arg2) return 1;
			return 0;
		});
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