/*
��Ŀ����
��ֻ����������2��3��5��������������Ugly Number��������6��8���ǳ�������14���ǣ���Ϊ������������7�� 
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������
*/
/*��ʱ����ȷ

class Solution {
public:
    int GetUglyNumber_Solution(int index) 
    {
        if (index<=0)
            return 0;
        int count=0,number=0;
        while (count<index)
        {
            number++;
            if (isuglynumber(number))
                count++;
        }
        return number;
    }
    bool isuglynumber(int n)
    {
        while (n%2==0)
            n=n/2;
        while (n%3==0)
            n=n/3;
        while (n%5==0)
            n=n/5;
        if (n==1)
            return true;
        else
            return false;
    }
};
*/
class Solution {
public:
   int GetUglyNumber_Solution(int index) {
        if (index < 7)return index;
        vector<int> res(index);
        res[0] = 1;
        int t2 = 0, t3 = 0, t5 = 0, i;
        for (i = 1; i < index; ++i)
        {
            res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));
            if (res[i] == res[t2] * 2)t2++;
            if (res[i] == res[t3] * 3)t3++;
            if (res[i] == res[t5] * 5)t5++;
        }
        return res[index - 1];
    }
};
