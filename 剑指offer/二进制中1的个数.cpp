/*
��Ŀ����
����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
*/

class Solution {
public:
     int  NumberOf1(int n) {
         int i=0;
         while(n)
         {
             n=n&(n-1);
             i++;
         }
         return i;
     }
};