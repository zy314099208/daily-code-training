/*
题目描述
写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。（多组同时输入 ）
输入描述:
输入一个十六进制的数值字符串。

输出描述:
输出该数值的十进制字符串。

示例1
输入
0xA

输出
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