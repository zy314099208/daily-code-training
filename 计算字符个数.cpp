/*
题目描述
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。

输出描述:
输出输入字符串中含有该字符的个数。

示例1
输入
ABCDEF A

输出
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