/*
��Ŀ����
����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode* root=pRootOfTree;
        if (root==NULL)
            return NULL;
        if (root->left==NULL&&root->right==NULL)
            return root;
        TreeNode* leftlist=Convert(root->left);
        TreeNode* p=leftlist;
        while (p!=NULL&&p->right!=NULL)
            p=p->right;
        if (leftlist!=NULL)
        {
            p->right=root;
            root->left=p;
        }
        TreeNode* rightlist=Convert(root->right);
        p=rightlist;
        if (rightlist!=NULL)
        {
            root->right=p;
            p->left=root;
        }
        return leftlist==NULL?root:leftlist;
            
        
    }
};