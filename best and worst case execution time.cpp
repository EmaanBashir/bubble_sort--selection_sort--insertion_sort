#include "SortingAlgorithm.h"
#include <algorithm>

//main method
int main() {
	int n;
	srand(time(0));
	SortingAlgorithm s;
	clock_t start;
	int* array1, * array2, * array3;

	//loop to create arrays of size 100, 1000, 10000, 100000, 1000000
	for (int i = 1000000; i <= 1000000; i *= 10) {
		cout << "Array of size: " << i << endl;
		array1 = new int[i];
		array2 = new int[i];
		array3 = new int[i];

		//loop to assign random integers to the arrays
		for (int j = 0; j < i; j++) {
			n = 1 + rand() % 100;
			array1[j] = n;
			array2[j] = n;
			array3[j] = n;
		}

		//'''Bubble sort'''
		cout << "\n\n\tBubble Sort\n";

		//Descending Order
		cout << "\nDescending Order: ";
		sort(array1, array1 + i, greater<int>());
		start = clock();
		s.bubbleSort(array1, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		//Ascending Order
		cout << "\nAscending Order: ";
		start = clock();
		s.bubbleSort(array1, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		//'''Selection Sort'''
		cout << "\n\n\tSelection Sort\n";

		//Descending Order
		cout << "\nDescending Order: ";
		sort(array2, array2 + i, greater<int>());
		start = clock();
		s.selectionSort(array2, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		//Ascending Order
		cout << "\nAscending Order: ";
		start = clock();
		s.selectionSort(array2, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		//'''Insertion Sort'''
		cout << "\n\n\tInsertion Sort\n";

		//Descending Order
		cout << "\nDescending Order: ";
		sort(array3, array3 + i, greater<int>());
		start = clock();
		s.insertionSort(array3, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		//Ascending Order
		cout << "\nAscending Order: ";
		start = clock();
		s.insertionSort(array3, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << " s";

		cout << "\n\n\n";
	}
	return 0;
}
