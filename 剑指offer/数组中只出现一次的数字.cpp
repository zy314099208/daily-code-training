/*
��Ŀ����
һ�����������������������֮�⣬���������ֶ�������ż���Ρ�
��д�����ҳ�������ֻ����һ�ε����֡�
*/

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) 
    {
        int len=data.size();
        if (len<2)
            return;
        int resultOR=0;
        for (int i=0;i<len;i++)
            resultOR^=data[i];
        unsigned int indexof1=whichbitis1(resultOR);
        *num1=*num2=0;
        for (int j=0;j<len;j++)
        {
            if (isbit1(data[j], indexof1))
                *num1^=data[j];
            else
                *num2^=data[j];
        }
        

    }
    
    unsigned int whichbitis1(int n)
    {
        int indexbit=0;
        while (((n&1)==0)&&(indexbit<8*sizeof(int)))
        {
            n=n>>1;
            indexbit++;
        }
        return indexbit;
    }
    
    bool isbit1(int num, unsigned int indexbit)
    {
        num=num>>indexbit;
        return (num&1);
    }
};