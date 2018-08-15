/*
题目描述
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
*/

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) 
    {
        
        return bst(sequence, 0, sequence.size()-1);
    }
    bool bst(vector<int> array, int begin, int end)
    {
        if (array.size()<=0)
            return false;
        int root=array[end];
        int i;
        for (i=begin;i<end;i++)
            if (array[i]>root)
                break;
        for (int j=i;j<end;j++)
            if (array[j]<root)
                return false;
        bool left=true;
        if (i>begin)
            left=bst(array, begin, i-1);
        bool right=true;
        if (i<end)
            right=bst(array, i, end-1);
        return left&&right;
    }
};