/*
��Ŀ����
����һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
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