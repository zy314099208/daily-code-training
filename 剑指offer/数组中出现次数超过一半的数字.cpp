/*
��Ŀ����
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
*/

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.size()==0)
            return 0;
        int mid=numbers.size()/2;
        int count=0;
        sort(numbers.begin(),numbers.end());
        for (int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==numbers[mid])
                count++;
        }
        if(count>numbers.size()/2)
            return numbers[mid];
        else
            return 0;
        
        
        
        }
            
    
    };