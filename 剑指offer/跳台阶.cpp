/*
��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
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