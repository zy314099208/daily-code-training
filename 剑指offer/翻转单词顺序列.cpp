/*
题目描述
牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。
同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。
例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。
*/

class Solution {
public:
    string ReverseSentence(string str) 
    {
        int len=0;
        int i;
        for (i=0;str[i]!='\0';i++)
            len++;
        str=str+' ';
        int count=0;
        for (i=0;i<len+1;i++)
        {
            if (str[i]==' ')
            {
                reverseword(str, count, i-1);
                count=i+1;
            }
        }
        str=str.substr(0, len);//substr(int a, int b),从a开始，截取长度为b
        reverseword(str, 0, len-1);
        return str;
    }
    
    string reverseword(string &str, int left, int right)
    {
        while (left<right)
        {
            swap(&str[left], &str[right]);
            left++;
            right--;
        }
        return str;
    }
    
    void swap(char* p, char* q)
    {
        char temp=*p;
        *p=*q;
        *q=temp;
    }
};
