/*
0,1,����,n-1��n�������ų�һ��ԲȦ��������0��ʼ��ÿ�δ����ԲȦ��ɾ����m�����֣�
������ԲȦ�����ʣ�µ�һ�����֡�
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