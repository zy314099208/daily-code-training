/*
题目描述
输入两个链表，找出它们的第一个公共结点。
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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) 
    {
        int length1=listlength(pHead1);
        int length2=listlength(pHead2);
        int sublength=(length1>=length2)?(length1-length2):(length2-length1);
        ListNode* plong=(length1>=length2)?pHead1:pHead2;
        ListNode* pshort=(length1>=length2)?pHead2:pHead1;
        for (int i=0;i<sublength;i++)
            plong=plong->next;
        while (plong!=NULL&&pshort!=NULL&&plong!=pshort)
        {
            plong=plong->next;
            pshort=pshort->next;
        }
        return plong;
    }
    
    int listlength (ListNode* pHead)
    {
        int length=0;
        while (pHead!=NULL)
        {
            length++;
            pHead=pHead->next;
        }
        return length;
    }
};