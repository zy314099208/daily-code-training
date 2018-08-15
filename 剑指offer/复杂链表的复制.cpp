/*
��Ŀ����
����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬��һ������ָ��ָ������һ���ڵ㣩��
���ؽ��Ϊ���ƺ��������head����ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
*/

/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead==NULL)
            return NULL;
        nodeclone(pHead);
        randomclone(pHead);
        return reconnect(pHead);
    }
    void nodeclone(RandomListNode* pHead)
    {
        RandomListNode* p1=pHead;
        while (p1!=NULL)
        {
            RandomListNode* p2=new RandomListNode(p1->label);
            p2->next=p1->next;
            p1->next=p2;
            p1=p2->next;
        }
    }
    void randomclone(RandomListNode* pHead)
    {
        RandomListNode* p1=pHead;
        while (p1!=NULL)
        {
            RandomListNode* p2=p1->next;
            if (p1->random!=NULL)
                p2->random=p1->random->next;
            p1=p2->next;
        }
    }
    RandomListNode* reconnect(RandomListNode* pHead)
    {
        RandomListNode* p1=pHead;
        RandomListNode* head=p1->next;
        while (p1!=NULL)
        {
            RandomListNode* p2=p1->next;
            p1->next=p2->next;
            p1=p1->next;
            if (p1!=NULL)
                p2->next=p1->next;
        }
        return head;
    }
};