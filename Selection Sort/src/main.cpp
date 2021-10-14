/**
 * \author Adi Aryasuta
 * \since October 14, 2021
 * source: https://www.geeksforgeeks.org/selection-sort/
*/

#include <iostream>

using namespace std;

void printArray(int array[], int size);
void selectionSort(int array[], int size);
void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
  
  int array[] = {6, 2, 2, 5, 3, 6, 8, 6, 9, 4, 3, 1, 5, 7};

  int n = sizeof(array) / sizeof(array[0]);

  cout << "Unsorted array: ";
  printArray(array, n);

  selectionSort(array, n);

  cout << "Sorted array: ";
  printArray(array, n);

  return 0;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {

  int minIndex;

  for (int i = 0; i < size - 1; i++) {
    minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }
    swap(&array[minIndex], &array[i]);
  }
}

void swap(int *a, int *b) {
  int temp = *a;
        *a = *b;
        *b = temp;
}