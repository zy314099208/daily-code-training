/*
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո����

��������:
һ���ַ������ǿգ�����С��5000��

�������:
����N�����һ�����ʵĳ��ȡ�

ʾ��1

����
hello world

���
5
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count=0,i=0;
    while (str[i]!='\0')
    {
        if (str[i]==' ')
            count=0;
        else
            count++;
        i++;
    }
    cout<<count<<endl;
    return 0;
}