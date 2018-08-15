/*
题目描述
输入一个链表，输出该链表中倒数第k个结点。
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        
        ListNode *pre,*p;
        p=pListHead;
        pre=pListHead;
        int count=0;
        while(p!=NULL)
        {
            p=p->next;
            count++;
            if(count>k)
                pre=pre->next;
        }
        if(count<k)
            return NULL;
        return pre;
        
        /*
        stack<ListNode* > s;
        ListNode *p=pListHead;
        if (p==NULL)
            return NULL;
        while (p->next)
        {
            s.push(p);
            p=p->next;
        }
        ListNode* head=p;
        while (!s.empty())
        {
            p->next=s.top();
            s.pop();
            p=p->next;
        }
        p->next=NULL;
        ListNode* q=head;
        unsigned int count=0;
        while(q)
        {
            count++;
            if (count==k)
            {
                return q;
                break;
            }
            q=q->next;
        }
        */
    }
};