/*
题目描述
输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        TreeNode* p1=pRoot1,* p2=pRoot2;
        bool result=false;
        if (p1!=NULL&&p2!=NULL)
        {
            if (p1->val==p2->val)
                result=zy_HasSubtree(p1,p2);
            if (!result)
                result=HasSubtree(p1->left, p2);
            if (!result)
                result=HasSubtree(p1->right, p2);
        }
        return result;
 
    }
    static bool zy_HasSubtree(TreeNode* p1, TreeNode* p2)
    {
        if (p2==NULL)
            return true;
        if (p1==NULL)
            return false;
        if (p1->val!=p2->val)
            return false;
        return zy_HasSubtree(p1->left, p2->left)&&zy_HasSubtree(p1->right, p2->right);
        
    }
};