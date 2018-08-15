/*
题目描述
统计一个数字在排序数组中出现的次数。
*/

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) 
    {
        int len=data.size();
        int low=0, high=len-1, mid, target ,count=0;
        while (low<=high)
        {
            mid=(low+high)/2;
            if (k<data[mid])
                high=mid-1;
            else if (k>data[mid])
                low=mid+1;
            else
            {
                target=mid;
                break;
            }
        }
        for (int i=target;i<len;i++)
        {
            
            if (data[i]!=k)
                break;
            count++;
        }
        for (int j=target-1;j>=0;j--)
        {
            
            if (data[j]!=k)
                break;
            count++;
        }
        return count;
        
    }
};