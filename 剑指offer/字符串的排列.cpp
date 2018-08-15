/*
��Ŀ����
����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
���������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
��������:
����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ��
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	vector<string> Permutation(string str) {
		vector<string> a;
		if (str.empty())
			return a;
		Permutation(a, str, 0);
		sort(a.begin(), a.end());//�����ֵ������
		return a;
	}
	void Permutation(vector<string> &array, string str, int begin)//������beginλ�����п�����
	{
		//һ�α����Ľ�������
		if (begin == str.size() - 1)
		{
			array.push_back(str);
		}
		for (int i = begin; i<str.size(); i++)
		{
			if (i != begin && str[i] == str[begin])
			{
				continue;//����beginλ�ظ����ַ��������н���������
			}
			swap(str[i], str[begin]);
			//��i==beginʱ��ҲҪ���������������ַ�
			//��i!=beginʱ���Ƚ�����ʹ��beginλȡ����ͬ�Ŀ����ַ����ٱ���������ַ�
			Permutation(array, str, begin + 1);
			swap(str[i], str[begin]);//Ϊ�˷�ֹ�ظ������������Ҫ��begin����Ԫ�����»�����
		}
	}
};
int main()
{
	string a = "abc";
	Solution s;
	vector<string> b;
	b = s.Permutation(a);
	for (int i = 0; i<b.size(); i++)
	{
		cout << b[i] << endl;
	}
	system("pause");
	return 0;
}