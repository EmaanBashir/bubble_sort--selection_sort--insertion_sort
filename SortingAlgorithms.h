#include <iostream>
#include <time.h>

using namespace std;

//class SortingAlgorithm
class SortingAlgorithm {

//public methods
public:

//bubble sort
	void bubbleSort(int* array, int size) {
		for (int i = size - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (array[j] > array[j + 1]) {
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	}

//selection sort
	void selectionSort(int* array, int size) {
		int max;
		for (int i = size - 1; i >= 0; i--) {
			max = i;
			for (int j = 0; j < i; j++) {
				if (array[j] > array[max]) {
					max = j;
				}
			}
			int temp = array[max];
			array[max] = array[i];
			array[i] = temp;
		}
	}

//insertion sort
	void insertionSort(int* array, int size) {
		int key, j;
		for (int i = 1; i < size; i++) {
			key = array[i];
			j = i - 1;
			while (j >= 0 && array[j] > key) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = key;
		}
	}
};

//main method to test the sorting algorithms
int main() {
	int array[20];
	srand(time(0));
	SortingAlgorithm s;

	//for loop to test each algorithm
	for (string x : {"bubble sort", "selection sort", "insertion sort"}) {

		cout << "\n		Sorting by " << x << endl;
		cout << "Unsorted array:\t";

		//for loop to generate a random array
		for (int i = 0; i < 20; i++) {
			array[i] = 1 + rand() % 100;
			cout << array[i] << " ";
		}

		cout << "\nSorted array:\t";

		//if statements to select the type of sort
		if(x == "bubble sort")s.bubbleSort(array, sizeof(array) / sizeof(int));
		if(x == "selection sort")s.selectionSort(array, sizeof(array) / sizeof(int));
		if(x == "insertion sort")s.insertionSort(array, sizeof(array) / sizeof(int));
		
		//for loop to print the sorted array
		for (int i = 0; i < 20; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
