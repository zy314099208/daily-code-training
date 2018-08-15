/*
题目描述
输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。
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