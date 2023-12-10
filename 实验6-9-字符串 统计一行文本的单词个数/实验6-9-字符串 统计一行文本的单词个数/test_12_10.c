#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[1000];//字符数组
    gets(a);//获取字符串
    int i;//循环变量
    int l;//记录字符串长度
    int num = 0;//单词数量
    for (i = 0; a[i] != '\0'; i++);//记录字符串长度
    l = i;
    for (i = 0; i < l; i++)//循环判断
    {
        if (a[i] != ' ' && a[i + 1] == ' ')//符合[?][空格]的情况
            num++;
        if (a[i] != ' ' && a[i + 1] == '\0')//符合[?]['\0']的情况
            num++;
    }
    printf("%d\n", num);
    return 0;
}


