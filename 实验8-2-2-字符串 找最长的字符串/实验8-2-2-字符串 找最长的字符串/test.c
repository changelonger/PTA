#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAXN 81
int main()
{
    int N = 0;
    scanf("%d", &N);
    getchar();//清理缓冲区
    char str[MAXN] = { '0' };
    int max_len = 0;
    char tmp[MAXN] = { '0' };//最长的字符串
    for (int i = 0; i < N; i++)//比较字符串长度
    {
        gets(str);
        if (strlen(str) > max_len)
        {
            max_len = strlen(str);
            strcpy(tmp, str);
        }
    }
    printf("The longest is: %s", tmp);
    return 0;
}