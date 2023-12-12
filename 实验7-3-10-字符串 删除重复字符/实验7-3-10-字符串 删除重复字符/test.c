#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int com_int(void* e1, void* e2);
int main()
{
	char s[80];
	gets(s);
	int sLen = strlen(s); int i = 0;
	qsort(s, sLen, sizeof(s[0]), com_int); int flag = 0;
    for (int i = 0; i < sLen; i++)
    {
            // 从剩下的 sLen-i 个字符中找出重复的字符并删除
        for (int j = i + 1; j < sLen; j++)
        {
            if (s[j] == s[i])
                {
                    for (int k = j; k < sLen; k++)
                    {
                        // 后续字符串前移，实现删除字符
                        s[k] = s[k + 1];
                    }

                    // 长度减1
                    s[--sLen] = '\0';
                    j--;  
                }    
        }
    }
		printf("%s", s);
	return 0;
}
int com_int(void* e1, void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
