/*
0,1,……,n-1这n个数字排成一个圆圈，从数字0开始，每次从这个圆圈里删除第m个数字，
求出这个圆圈里最后剩下的一个数字。
*/

class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if (n<1||m<1)
            return -1;
        int mark=0;
        for (int i=2;i<=n;i++)
            mark=(mark+m)%i;
        return mark;
    }
};