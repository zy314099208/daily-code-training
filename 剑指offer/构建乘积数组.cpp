/*
题目描述
给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
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