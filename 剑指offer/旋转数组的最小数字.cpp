/*
题目描述
把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，
输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
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