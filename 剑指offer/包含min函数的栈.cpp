/*
题目描述
定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
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