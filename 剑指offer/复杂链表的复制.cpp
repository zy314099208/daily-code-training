/*
题目描述
输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），
返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
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