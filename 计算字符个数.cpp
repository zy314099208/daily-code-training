/*
��Ŀ����
д��һ�����򣬽���һ������ĸ��������ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��

��������:
����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���

�������:
��������ַ����к��и��ַ��ĸ�����

ʾ��1
����
ABCDEF A

���
1
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char ch;
    cin>>ch;
    int i, count=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==ch||str[i]==ch+32||str[i]==ch-32)
            count++;
    }
    cout<<count<<endl;
    return 0;
}