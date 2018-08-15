#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define length 10
using namespace std;

void display_(int array[], int len);
void bubsort_(int array[], int len);
void swap_(int *a, int *b);

int main()
{
	int array[length] = { 5, 1, 9, 3, 7, 4, 8, 6, 2, 10 };
	int len = length;
	cout << "before sort:" << endl;
	display_(array, len);
	bubsort_(array, len);
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

void bubsort_(int array[], int len)
{
	int i,j;
	for (i = 0; i < len;i++)
	for (j = len-1; j >i; j--)
	{
		if (array[j-1]>array[j])
			swap_(&array[j-1], &array[j]);
	}
}

void swap_(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}