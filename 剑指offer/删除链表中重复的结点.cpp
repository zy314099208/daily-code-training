/*
��Ŀ����
��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 
���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5
*/

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (pHead==NULL)
            return pHead;
        ListNode* pre=NULL;
        ListNode* p=pHead;
        ListNode* q=NULL;
        while (p!=NULL)
        {
            if (p->next!=NULL&&p->next->val==p->val)
            {
                q=p->next;
                while (q!=NULL&&q->next!=NULL&&q->next->val==p->val)
                    q=q->next;
                if (p==pHead)
                    pHead=q->next;
                else
                    pre->next=q->next;
                p=q->next;
            }
            else
            {
                pre=p;
                p=p->next;
            }
        }
        return pHead;

    }
};