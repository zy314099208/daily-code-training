//ɾ���ַ����г��ִ������ٵ��ַ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "abccddeeef";
	int dic[26] = { 0 };
	int len = str.size();
	for (int i = 0; i < len; i++)//ͳ���ַ����и��ַ����ֵĴ���
	{
		int temp = 0;
		temp = str[i] - 'a';
		dic[temp]++;
	}
	int flag = 0;
	for (int i = 0; i < 26; i++)//�ҳ�������Сֵ
	{
		if (flag == 0 && dic[i] != 0)
			flag = dic[i];
		else if (flag != 0 && dic[i] != 0 && flag>dic[i])
			flag = dic[i];
	}
	string result="";
	for (int i = 0; i < len; i++)//ֻҪ���ִ���������flag����Сֵ���������
	{
		if (dic[str[i] - 'a'] != flag)
			result += str[i];

	}
	cout << result << endl;
	system("pause");
	return 0;
}