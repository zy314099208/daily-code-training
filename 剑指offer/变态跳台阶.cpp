/*
��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
*/

class Solution {
public:
    int jumpFloorII(int number) {
        int n=number;
        if (n<0)
            return -1;
        else if (n==0)
            return 0;
        else if (n==1)
            return 1;
        else if (n==2)
            return 2;
        else 
        {
            int second=2,third=0;
            for (int i=3;i<n+1;i++)
            {
                third=2*second;
                second=third;
            }
            return third;
        }

    }
};