#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[30];
    gets(str);
    int i;
    for (i = 0; str[i] != '#'; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = str[i] + 32;
        }
        else if (islower(str[i]))
            str[i] = str[i] - 32;
    }
    str[i] = '\0';
    printf("%s", str);
    return 0;
}
