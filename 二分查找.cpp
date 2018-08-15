#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define length 10
using namespace std;

int binarysearch_(int array[], int n, int len);

int main()
{
	int array[length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = length;
	cout << "input the number you need search: ";
	int n;
	cin >> n;
	cout << "the location is: ";
    cout<<binarysearch_(array, n, len)<<endl;
	system("pause");
	return 0;
}


int binarysearch_(int array[], int n, int len)
{
	int low = 0, high = len - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (n < array[mid])
			high = mid - 1;
		else if (n>array[mid])
			low = mid + 1;
		else
			return mid;	
	}
}