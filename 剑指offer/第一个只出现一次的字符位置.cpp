/*
题目描述
在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,
并返回它的位置, 如果没有则返回 -1（需要区分大小写）.
*/

class Solution {
public:
    int FirstNotRepeatingChar(string str) 
    {
        int len=0;
        for (int i=0;str[i]!='\0';i++)
            len++;
        return find_(str, len);
    } 
    
    int find_(string &str, int len)
    {
        if (len==0)
            return -1;
        int i,j;
        for (i=0;i<len;i++)
        {
            for (j=0;j<len;j++)
            {
                if (j!=i&&str[i]==str[j])
                    break;
            }
            if (j==len)
                break;
        }
        return i;
            
    }
};