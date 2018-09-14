//两字符串最长公共连续子串的长度
//假设两个字符串str1和str2的长度分别为m和n，构建一个矩阵（即二维数组）M[m][n]，初始值都设为0，如果字符串str1中
//第i个字符str[i - 1](下标从零开始)与字符串str2中第j个字符str[j - 1]相等，则将matric[i][j]设为1。
//最后统计矩阵M中对角线最大的连续1的个数，即为两字符串最长公共子串,
//是每条对角线，而不只是主对角线。



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