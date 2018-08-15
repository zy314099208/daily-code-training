/*
��Ŀ����
���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
����ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�
*/

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV)
    {
        if (pushV.size()!=popV.size())
            return false;
        stack<int> array;
        int count=0;
        for (int i=0;i<popV.size();i++)
        {
            while (array.empty()||popV[i]!=array.top())
            {
                array.push(pushV[count]);
                count++;
            }
            array.pop();
        }
        if (array.empty())
            return true;
        else
            return false;
        
    }
};