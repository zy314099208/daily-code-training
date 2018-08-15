/*
��Ŀ����
����һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],
����B�е�Ԫ��B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó�����
*/

class Solution {
public:
    vector<int> multiply(const vector<int>& A) 
    {
        int n=A.size();
        vector<int> b(n);
        for (int i=0;i<n;i++)
        {
            b[i]=1;
            for (int j=0;j<n;j++)
            {
                if (j==i)
                    continue;
                b[i]=b[i]*A[j];
            }
        }
        return b;
            
    }
};