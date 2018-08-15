/*
题目描述
输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

/*使用array.insert()函数
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector <int> array;
        ListNode *p=head;
        while(p!=NULL)
        {
            array.insert(array.begin(),p->val);
            p=p->next;
        }
        return array;
    }
};
*/

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head){
        vector <int> result;
        stack <int> arr;
        ListNode *p=head;
        while(p!=NULL)
        {
            arr.push(p->val);
            p=p->next;
        }
        int len=arr.size();
        for(int i=0;i<len;i++)
        {
            result.push_back(arr.top());  
            arr.pop();
        }
        return  result;
        
    }
};