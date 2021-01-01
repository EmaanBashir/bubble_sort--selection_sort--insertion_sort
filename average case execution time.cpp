#include "SortingAlgorithm.h"
//main method
int main() {
	int n; 
	srand(time(0));
	SortingAlgorithm s; 
	clock_t start, end;
	int* array1, * array2, *array3;

	//loop to create arrays of size 100, 1000, 10000, 100000, 1000000
	for (int i = 100; i <= 1000000; i *= 10) {
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

		//calculating execution time for bubble sort
		cout << "\nBubble Sort: ";
		start = clock();
		s.bubbleSort(array1, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC;

		//calculating execution time for insertion sort
		cout << "\nInsertion Sort: ";
		start = clock();
		s.insertionSort(array2, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC;

		//calculating execution time for selection sort
		cout << "\nSelection Sort: ";
		start = clock();
		s.selectionSort(array3, i);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC;

		cout << endl << endl;
	}
	return 0;
}
