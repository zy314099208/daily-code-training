//���ַ�������������Ӵ��ĳ���
//���������ַ���str1��str2�ĳ��ȷֱ�Ϊm��n������һ�����󣨼���ά���飩M[m][n]����ʼֵ����Ϊ0������ַ���str1��
//��i���ַ�str[i - 1](�±���㿪ʼ)���ַ���str2�е�j���ַ�str[j - 1]��ȣ���matric[i][j]��Ϊ1��
//���ͳ�ƾ���M�жԽ�����������1�ĸ�������Ϊ���ַ���������Ӵ�,
//��ÿ���Խ��ߣ�����ֻ�����Խ��ߡ�



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str1 = "abcdefg";
	string str2 = "abcdfg";
	int mat[50][50] = { 0 };
	for (int i = 0; str1[i]!='\0' ; i++)
	{
		for (int j = 0; str2[j]!='\0' ; j++)

		{
			if (str1[i] == str2[j])
				mat[i][j] = 1;
		}
	}
	int m, n;
	int result = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		for (int j = 0; j < str2.size(); j++)
		{
			m = i; n = j;
			int len = 0;
			while (mat[m][n] == 1)
			{
				len++;
				m++;
				n++;
			}
			if (result < len)
			{
				result = len;
			}
		}
	}
	cout << result << endl;
	system("pause");
	return 0;
}