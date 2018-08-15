/*
题目描述
写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。
*/

class Solution {
public:
    int Add(int num1, int num2)
    {
        int sum=0;
        int carry=0;
        while (num2!=0)
        {
            sum=num1^num2;//异或
            carry=(num1&num2)<<1;//进位
            num1=sum;
            num2=carry;
        }
        return num1;
    }
};
