/*
��Ŀ����
�������е��������֣����ǰ��һ�����ִ��ں�������֣����������������һ������ԡ�
����һ������,�����������е�����Ե�����P��
����P��1000000007ȡģ�Ľ������� �����P%1000000007
*/

//�鲢����

class Solution {
public:
    int InversePairs(vector<int> data) {
        if(data.empty())
            return 0;
        vector<int>copy;
        int len=data.size();
        for(int i=0;i<len;++i)
        {
            copy.push_back(data[i]);
        }
        long long count=InversePairsCore(data,copy,0,len-1);
        return count%1000000007;
    }
    long long InversePairsCore(vector<int>&data,vector<int>&copy,int start,int end)
    {
        if(start==end)
        {
            copy[start]=data[start];
            return 0;
        }
        int length=(end-start)/2;
        long long left=InversePairsCore(copy,data,start,start+length);
        long long right=InversePairsCore(copy,data,start+length+1,end);
        int i=start+length;
        int j=end;
        int indexcopy=end;
        long long  count=0;
        while(i>=start&&j>=start+length+1)
        {
            if(data[i]>data[j])
            {
                copy[indexcopy--]=data[i--];
                count=count+j-start-length;
            }
            else
            {
                copy[indexcopy--]=data[j--];
            }
        }
        for(;i>=start;i--)
            copy[indexcopy--]=data[i];
        for(;j>=start+length+1;j--)
            copy[indexcopy--]=data[j];
        return left+right+count;
    }
};