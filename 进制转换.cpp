/*
��Ŀ����
д��һ�����򣬽���һ��ʮ�����Ƶ���ֵ�ַ������������ֵ��ʮ�����ַ�����������ͬʱ���� ��
��������:
����һ��ʮ�����Ƶ���ֵ�ַ�����

�������:
�������ֵ��ʮ�����ַ�����

ʾ��1
����
0xA

���
10
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int i;
        int num=0, total=0;
        int len=0;
        for (i=0;str[i]!='\0';i++)
            len++;
        for (i=2;str[i]!='\0';i++)
        {
            if (str[i]>='0'&&str[i]<='9')
                num=str[i]-'0';
            else
                num=str[i]-'A'+10;
            total=total+num*pow(16,len-i-1);
        }
        cout<<total<<endl;
    }
    return 0;
}