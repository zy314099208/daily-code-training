/*
从扑克牌中随机抽5张牌，判断是不是一个顺子，即这5张牌是不是连续的。
2-10为数字本身，A为1，J、Q、K分别为11、12、13，而大小王可以看成任意数字。
*/

class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
        int len=numbers.size();
        if (len!=5)
            return false;
        sort(numbers.begin(),numbers.end());
        int numberofzero=0;//数组中0的数量
        int numberofgap=0;//数组的空缺数，比如，1到4，空缺数为2
        for (int i=0;i<len;i++)
            if (numbers[i]==0)
                numberofzero++;
        int low=numberofzero;//low为数组第一个非0元素的下标
        int high=low+1;
        while (high<len)
        {
            if (numbers[low]==numbers[high])
                return false;
            numberofgap+=numbers[high]-numbers[low]-1;
            low++;
            high++;
        }
        return numberofgap<=numberofzero?true:false;//空缺数小于等于0的数量，则为顺子，反之，不是顺子
    }
};
