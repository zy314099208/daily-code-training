/*
题目描述
我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
*/

class Solution {
public:
    int rectCover(int number) {
        int n=number;
        if(n<=0)
            return false;
        else if(n==1)
            return 1;
        else if(n==2)
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