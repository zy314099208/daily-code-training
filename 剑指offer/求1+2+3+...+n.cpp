/*
��Ŀ����
��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
*/

class Solution {
public:
    int Sum_Solution(int n) {
        int total=n;
        total&&(total=total+Sum_Solution(n-1));
        return total;
       
    }
};