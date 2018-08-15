#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

bool iszhishu(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("2到%d之间的素数如下：\n", n);
	int i;
	for (i = 2; i <= n; i++)
	{
		if (iszhishu(i))
			cout << i << endl;
	}
	system("pause");
	return 0;

}