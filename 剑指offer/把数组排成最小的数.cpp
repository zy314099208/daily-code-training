/*
��Ŀ����
����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��
*/

class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        string res;
        sort(numbers.begin(),numbers.end(),cmp);
        for (int i=0;i<numbers.size();i++)
        {
            res=res+to_string(numbers[i]);
        }
        return res;
    }
    static bool cmp(int a,int b)
    {
        string A = to_string(a)+to_string(b);
        string B = to_string(b)+to_string(a);
        return A<B;
    }
};