/*
题目描述
输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S。
如果有多对数字的和等于S，输出两个数的乘积最小的。
*/

class Solution {
public:
    
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
        int len=array.size();
        int low=0,high=len-1;
        int sum_zy=0;
        vector<int> result;
        while (low<high)
        {
            sum_zy=array[low]+array[high];
            if (sum_zy==sum&&low!=high)
            {
                result.push_back(array[low]);
                result.push_back(array[high]);
                break;
            }
            else if (sum_zy>sum)
                high--;
            else
                low++;
        }
        return result;
    }
};
