/*
��Ŀ����
���������ַ������밴����Ϊ8���ÿ���ַ�����������µ��ַ������飻 
���Ȳ���8���������ַ������ں��油����0�����ַ��������� 

��������:
���������ַ���(����2��,ÿ���ַ�������С��100)

�������:
���������Ϊ8�����ַ�������

ʾ��1

����
abc
123456789

���
abc00000
12345678
90000000
*/

#include <iostream>
#include <string>
using namespace std;

void division(string str)
{
    int len=0, i;
    for (i=0;str[i]!='\0';i++)
        len++;
    if (len==0)
        return;
    if (len<=8)
    {
        for (i=0;i<8-len;i++)
            str=str+'0';
        cout<<str<<endl;
        return;
    }
    cout<<str.substr(0,8)<<endl;
    division(str.substr(8,len-8));
}

int main()
{
    string str1, str2;
    cin>>str1>>str2;
    division(str1);
    division(str2);
    return 0;
}