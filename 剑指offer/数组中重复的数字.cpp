/*
��Ŀ����
��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ� ������ĳЩ�������ظ��ģ�
����֪���м����������ظ��ġ�Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡� 
���磬������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ������ǵ�һ���ظ�������2��
*/

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        /*if (length==0)
            return false;
        for (int i=0;i<length;i++)
            if (numbers[i]>length-1||numbers[i]<0)
                return false;
        for (int i=0;i<length;i++)
        {
            while (numbers[i]!=i)
            {
                if (numbers[i]==numbers[numbers[i]])
                {
                    *duplication=numbers[i];
                    return true;
                }
                int temp=numbers[i];
                numbers[i]=numbers[temp];
                numbers[temp]=temp;
            }
        }
        return false;*/
        if (length==0)
            return false;
        for (int i=0;i<length;i++)
            if (numbers[i]>length-1||numbers[i]<0)
                return false;
        vector <int> array(length);
        for (int i=0;i<length;i++)
            array[i]=numbers[i];
        sort(array.begin(),array.end());
        for (int i=0;i<length-1;i++)
        {
            if (array[i]==array[i+1])
            {
                *duplication=array[i];
                return true;
            }
        }
        return false;
    }
};