/*
��Ŀ����
����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�min������ʱ�临�Ӷ�ӦΪO��1������
*/

class Solution {
public:
    void push(int value) 
    {
        a.push(value);
        if (b.empty()||b.top()>value)
            b.push(value);
        else
            b.push(b.top());
    }
    void pop()
    {
        a.pop();
        b.pop();
    }
    int top() 
    {
        return b.top();
    }
    int min()
    {
        return b.top();
    }
    private:
    stack<int> a;
    stack<int> b;
};