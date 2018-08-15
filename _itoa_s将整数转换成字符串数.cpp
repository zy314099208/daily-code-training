#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i = 1024;
	int j = 16;//j为进制数

	char a[100] = { 0 };

	_itoa_s(i, a, j);
	cout << a << endl;


	system("pause");
	return 0;
}
