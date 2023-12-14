#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][11];
    int i = 0;
    int n = 0; scanf("%d", &n); int k; scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    char tmp[11];
    for (i = 0; i < k; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}
