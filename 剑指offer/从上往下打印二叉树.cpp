/*
��Ŀ����
�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
*/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) 
    {
        vector<int> array;
        queue<TreeNode*> que;
        TreeNode* q;
        if (root==NULL)
            return array;
        que.push(root);
        while (!que.empty())
        {
            q=que.front();
            array.push_back(q->val);
            if (q->left!=NULL)
                que.push(q->left);
            if (q->right!=NULL)
                que.push(q->right);
            que.pop();
        }
        return array;
        
        
    }
};