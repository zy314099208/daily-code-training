/*
��Ŀ����
����һ��������ת��������������ı�ͷ��
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        stack<ListNode* > s;
        ListNode* p=pHead;
        if (p==NULL||p->next==NULL)
            return p;
        while(p->next!=NULL)
        {
            s.push(p);
            p=p->next;
        }
        ListNode* head=p;
        while (!s.empty())
        {
            p->next=s.top();
            p=p->next;
            s.pop();
        }
        p->next=NULL;
        return head;
        
    }
};