/*
��Ŀ����
����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���
*/

class Solution {
public:
    double Power(double base, int exponent) {
        double total=1;
        if(exponent>0)
        {
            for (int i=0;i<exponent;i++)
                total=total*base;
            
        }
        
        else if(exponent==0)
            total=1;
        else
        {
            exponent=abs(exponent);
            for (int i=0;i<exponent;i++)
            {
                 total=total*base;
            }
            total=1/total;
               
        }
        return total;
        
    
    }
};