/*
��Ŀ����
���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
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