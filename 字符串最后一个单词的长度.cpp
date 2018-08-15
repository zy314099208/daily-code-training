/*
题目描述
计算字符串最后一个单词的长度，单词以空格隔开

输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度。

示例1

输入
hello world

输出
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