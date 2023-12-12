#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][80];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    char tmp[80];
    for (i = 0; i < 4; i++)
    {
        int j = 0;
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
    printf("After sorted:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}
