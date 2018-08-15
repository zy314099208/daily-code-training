#include <iostream>
#include <stdio.h>
#define n 7 //数组大小为7*7
using namespace std;
int main()
{
	int a[n][n], i, j, s;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			s = i + j;
			if (s < n)
				a[i][j] = s*(s + 1) / 2 + (((i + j) % 2 == 0 )? j : i);//左上部分，包括对角线
			else
			{
				s = (n - 1 - i) + (n - 1 - j);
				a[i][j] = n*n - s*(s + 1)/2 - (n - (((i + j) % 2 == 0) ? j : i));//右下部分，不包括对角线
			}
				

		}

	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
	
	
	
}
