/*
��Ŀ����
���������Ķ�����������任ΪԴ�������ľ���
��������:
�������ľ����壺Դ������ 
    	    8
    	   /  \
    	  6   10
    	 / \  / \
    	5  7 9 11
    	���������
    	    8
    	   /  \
    	  10   6
    	 / \  / \
    	11 9 7  5

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
    void Mirror(TreeNode *pRoot)
    {
        TreeNode *p=pRoot;
        if (p==NULL)
            return;
        if (p->left==NULL&&p->right==NULL)
            return;
        TreeNode *temp=p->left;
        p->left=p->right;
        p->right=temp;
        if (p->left) 
            Mirror(p->left);
        if (p->right)
            Mirror(p->right);
        
    }
};