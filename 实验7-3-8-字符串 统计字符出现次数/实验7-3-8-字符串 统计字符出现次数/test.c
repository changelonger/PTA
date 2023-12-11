#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int count = 0;
    char m;
    scanf("%c",&m);
    int len = strlen(str);
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] == m)
            count++;
    }
    printf("%d", count);
}