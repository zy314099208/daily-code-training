/*
��Ŀ����
��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ�
�����ü����������N��1��1000֮������������N��1000�������������ظ������֣�
ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�
Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣
����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ���(ͬһ��������������ܻ��ж������ݣ�ϣ���������ȷ����)��

ע������������֤�����������ȷ�ԣ�������������֤������������ֹһ�顣

��������:
������У���������������ĸ�������������Ӧ����������

�������:
���ض��У������Ľ��
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
    {
        vector<int> array(n);
	    int i;
	    for (i = 0; i<n; i++)
	    {
		    cin >> array[i];
	    }
	    sort(array.begin(), array.end());
	    vector<int> b;
	    b.push_back(array[0]);
	    for (i = 1; i<n; i++)
	    {
		    if (array[i - 1] == array[i])
			    continue;
		    else
			    b.push_back(array[i]);
	    }
	    int len = b.size();
	    for (i = 0; i<len; i++)
		    cout << b[i] << endl;
        }
	return 0;
}