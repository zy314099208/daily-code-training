/*
题目描述
输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
(注意: 在返回值的list中，数组长度大的数组靠前)
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
    vector<vector<int> > result;
    vector<int> array;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) 
    {
        if (root==NULL)
            return result;
        array.push_back(root->val);
        if (expectNumber==root->val&&root->left==NULL&&root->right==NULL)
            result.push_back(array);
        FindPath(root->left, expectNumber-root->val);
        FindPath(root->right, expectNumber-root->val);
        if (!array.empty())
            array.pop_back();
        return result;

    }
};