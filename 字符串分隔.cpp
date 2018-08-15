/*
题目描述
连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。 

输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

示例1

输入
abc
123456789

输出
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