/*
��Ŀ����
����ĳ��������ǰ���������������Ľ�������ؽ����ö����������������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int len=vin.size();
        if (len==0)
            return NULL;
        TreeNode *head=new TreeNode(pre[0]);
        vector <int> left_pre, left_vin, right_pre, right_vin;
        int gen=0;
        for (int i=0;i<len;i++)
            if (pre[0]==vin[i])
            {
                gen=i;
                break;
            }
        for (int i=0;i<gen;i++)
        {
            left_pre.push_back(pre[i+1]);
            left_vin.push_back(vin[i]);
        }
        for (int i=gen+1;i<len;i++)
        {
            right_pre.push_back(pre[i]);
            right_vin.push_back(vin[i]);
        }
        //head->left=reConstructBinaryTree(left_pre,left_vin);
        (*head).left=reConstructBinaryTree(left_pre,left_vin);
        head->right=reConstructBinaryTree(right_pre,right_vin);
        return head;
    }
};