/*
��Ŀ����
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� ����һ���Ǽ�����������һ����ת��
�����ת�������СԪ�ء� ��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1�� 
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
*/

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int i=0;
        int j=0;
        int min;
        if (rotateArray.size()==0)
            return 0;
            for(i=0;i<rotateArray.size();i++)
            {
                for (j=i+1;j<rotateArray.size()-1;j++)
                {
                    if(rotateArray[i]>rotateArray[j])
                    {
                        /*min=rotateArray[i];
                        rotateArray[i]=rotateArray[j];
                        rotateArray[j]=min;*/
                        zyswap(&rotateArray[i],&rotateArray[j]);
                    }
                }
                
            }
        min =rotateArray[0];
        return min;
                    
    }
    void zyswap(int *a,int *b)
    {
        int i=*a;
        *a=*b;
        *b=i;
    }
};