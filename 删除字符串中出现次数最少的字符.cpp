//删除字符串中出现次数最少的字符
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "abccddeeef";
	int dic[26] = { 0 };
	int len = str.size();
	for (int i = 0; i < len; i++)//统计字符串中各字符出现的次数
	{
		int temp = 0;
		temp = str[i] - 'a';
		dic[temp]++;
	}
	int flag = 0;
	for (int i = 0; i < 26; i++)//找出次数最小值
	{
		if (flag == 0 && dic[i] != 0)
			flag = dic[i];
		else if (flag != 0 && dic[i] != 0 && flag>dic[i])
			flag = dic[i];
	}
	string result="";
	for (int i = 0; i < len; i++)//只要出现次数不等于flag（最小值），就输出
	{
		if (dic[str[i] - 'a'] != flag)
			result += str[i];

	}
	cout << result << endl;
	system("pause");
	return 0;
}