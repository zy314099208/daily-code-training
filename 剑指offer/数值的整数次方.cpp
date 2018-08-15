/*
题目描述
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
*/

class Solution {
public:
    double Power(double base, int exponent) {
        double total=1;
        if(exponent>0)
        {
            for (int i=0;i<exponent;i++)
                total=total*base;
            
        }
        
        else if(exponent==0)
            total=1;
        else
        {
            exponent=abs(exponent);
            for (int i=0;i<exponent;i++)
            {
                 total=total*base;
            }
            total=1/total;
               
        }
        return total;
        
    
    }
};