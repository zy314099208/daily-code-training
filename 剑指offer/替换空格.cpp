/*
题目描述
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/

#include <iostream>
using namespace std;
//void replaceSpace(char *str, int length);


void replaceSpace(char *str, int length) {
	if (str == NULL)
		return;
	int CountOfBlanks = 0;
	int Originallength = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		Originallength++;
		if (str[i] == ' ')
			++CountOfBlanks;
	}
	int len = Originallength + 2 * CountOfBlanks;
	/*if (len + 1>length)
	return;*/

	char*pStr1 = str + Originallength;//¸´ÖÆ½áÊø·û¡®\0¡¯
	char*pStr2 = str + len;
	while (pStr1<pStr2)
	{
		if (*pStr1 == ' ')
		{
			*pStr2-- = '0';
			*pStr2-- = '2';
			*pStr2-- = '%';
		}
		else
		{
			*pStr2-- = *pStr1;
		}
		--pStr1;
	}
}

int main()
{
	char str[] = { "I am happy" };
	int n;
	n = strlen(str);
	replaceSpace(str, n);
	cout << str << endl;
	system("pause");
	return 0;
}
