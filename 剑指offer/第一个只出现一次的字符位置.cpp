/*
��Ŀ����
��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,
����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��.
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