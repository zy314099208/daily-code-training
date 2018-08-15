/*
题目描述
汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,
要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
*/

class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
        int len=0;
        int i;
        for (i=0;str[i]!='\0';i++)
            len++;
        if (len==0)
            return str;
        n=n%len;
        vector<char> array;
        for (i=0;i<n;i++)
            array.push_back(str[i]);
        for (i=0;i<len-n;i++)
            str[i]=str[i+n];
        for (i=len-n;i<len;i++)
            str[i]=array[i-(len-n)];
        return str;
    }
};
