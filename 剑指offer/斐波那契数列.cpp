/*
��Ŀ����
��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0��Ϊ0����
n<=39
*/

class Solution {
public:
    int Fibonacci(int n) {
        int a[n];
        a[0]=0;
        a[1]=1;
        for (int i=2;i<n+1;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];

    }
};