/*
题目描述
将一个字符串转换成一个整数(实现Integer.valueOf(string)的功能，但是string不符合数字要求时返回0)，
要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0。

输入描述:
输入一个字符串,包括数字字母符号,可以为空

输出描述:
如果是合法的数值表达则返回该数字，否则返回0

示例1
输入
+2147483647
    1a33
输出
2147483647
    0
*/

class Solution {
public:
    int StrToInt(string str) 
    {
        char* p=&str[0];
        if (p==NULL)
            return 0;
        int num=0;
        bool flag=false;//flag标记正负数
        if (*p=='+')
            p++;
        else if (*p=='-')
        {
            p++;
            flag=true;
        }
        while (*p!='\0')
        {
            if (*p>='0'&&*p<='9')
                num=num*10+*p-'0';//字符型减'0'变整型, 整型加'0'变字符型
            else
            {
                num=0;
                break;
            }
            p++;
        }
        if (flag)
            num=0-num;
        return num;
    }
};
