#include <iostream>
using namespace std;

int main()
{
	int num = 12345;
	char str[5];
	int i = 0;
	while (num)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	int j = 0;
	for (j = 0; j < 2; j++)
	{
		char q = str[j];
		str[j] = str[4 - j];
		str[4 - j] = q;
	}
	for (j = 0; j < 5; j++)
		cout << str[j];
	cout << endl;
	system("pause");
	return 0;
}

