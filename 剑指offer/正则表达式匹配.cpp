/*
��Ŀ����
��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��ģʽ�е��ַ�'.'��ʾ����һ���ַ���
��'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ��� �ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ��
���磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��
*/

class Solution {
public:
    bool match(char* str, char* pattern)
    {
        return matchcore(str, pattern);
    }
    
    bool matchcore(char* str, char* pattern)
    {
        if (*pattern=='\0'&&*str=='\0')
            return true;
        if (*pattern=='\0'&&*str!='\0')
            return false;
        if (*(pattern+1)=='*')
        {
            if (*pattern==*str||(*pattern=='.'&&*str!='\0'))
                return matchcore(str, pattern+2)||matchcore(str+1, pattern+2)||matchcore(str+1, pattern);
            else
                return matchcore(str, pattern+2);
        }
        if (*pattern==*str||(*pattern=='.'&&*str!='\0'))
            return matchcore(str+1, pattern+1);
        return false;
    }
};