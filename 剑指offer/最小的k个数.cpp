/*
��Ŀ����
����n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��
*/

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(input.empty()||k>input.size()) return res;
         
        sort(input.begin(),input.end());
         
        for(int i=0;i<k;i++)
            res.push_back(input[i]);
         
        return res;
        
    }
};