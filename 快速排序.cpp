#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define length 9
using namespace std;

void display_(int array[], int len);
void quicksort_(int array[], int , int len);
int partition_(int array[], int low, int high);
void swap_(int *a, int *b);

int main()
{
	int array[length] = { 5, 1, 9, 3, 7, 4, 8, 6, 2 };
	int len = length;
	cout << "before sort:" << endl;
	display_(array, len);
	quicksort_(array, 0, len-1);
	cout << "after sort:" << endl;
	display_(array, len);
	system("pause");
	return 0;
}

void display_(int array[], int len)
{
	for (int i = 0; i < len; i++)
		cout << array[i] << " ";
	cout << endl;
}

void quicksort_(int array[], int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = partition_(array, low, high);
		quicksort_(array, low, pivot - 1);
		quicksort_(array, pivot + 1, high);
	}
}

int partition_(int array[], int low, int high)
{
	int pivotkey;
	pivotkey = array[low];
	while (low < high)
	{
		while (low<high&&array[high] >= pivotkey)
			high--;
		swap_(&array[high], &array[low]);
		while(low<high&&array[low] <= pivotkey)
			low++;
		swap_(&array[high], &array[low]);
	}
	return low;
}

void swap_(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
