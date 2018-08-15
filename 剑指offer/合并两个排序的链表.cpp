/*
题目描述
输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* p1=pHead1;
        ListNode* p2=pHead2;
        if (p1==NULL)
            return p2;
        if (p2==NULL)
            return p1;
        ListNode* head=NULL;
        if (p1->val<p2->val)
        {
            head=p1;
            head->next=Merge(p1->next,p2);
        }
        else
        {
            head=p2;
            head->next=Merge(p1,p2->next);
        }
        return head;
            
        
        
        
        /*
        ListNode* p1=pHead1;
        ListNode* p2=pHead2;
        vector<int > array;
        while (p1)
        {
            array.push_back(p1->val);
            p1=p1->next;
        }
        while (p2)
        {
            array.push_back(p2->val);
            p2=p2->next;
        }
        sort(array.begin(),array.end());
        ListNode* p=array;
        ListNode* head=p;
        for (int i=1;i<array.size();i++)
        {
            p->next=array[i];
            p=p->next;
        }
        p->next=NULL;
        return head;
        */
    }
};