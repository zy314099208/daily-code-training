/*
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/

class Solution {
public:
    int jumpFloor(int number) {
        int n=number;
        if (n<0)
            return false;
        else if (n==0)
            return 0;
        else if (n==1)
            return 1;
        else if (n==2)
            return 2;
        else
        {
            int first=1,second=2,third=0;
            for (int i=3;i<=n;i++)
            {
                third=first+second;
                first=second;
                second=third;
            }
            return third;
                
        }
        
    }
};