/*
��Ŀ����
С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,�����Ͼ�д������ȷ����100��
���������������ڴ�,�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22��
���ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
*/

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
        vector<vector<int> > result;
        if (sum<=2)
            return result;
        int low=1,high=1,sum_zy=1;
        while (low<=high)
        {
            high++;
            sum_zy=sum_zy+high;
            while (sum_zy>sum)
            {
                sum_zy=sum_zy-low;
                low++;
            }
            if (sum_zy==sum&&low!=high)
            {
                vector<int> array;
                for (int i=low;i<=high;i++)
                    array.push_back(i);
                result.push_back(array);
            }
        }
        return result;
    }
};