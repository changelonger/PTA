#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[32]; char ip[33] = "0";
    scanf("%s", str);
    int* p1 = str; int i = 0; int j = 0;
    for (i = 0; i < 4; i++)
    {
        int k = 0;
        int sum = 0; char mid[32] = "0";
        p1 += 2 * i;
        for (j = 0; j < 8; j++)
        {
            int cnt = pow(2, 7 - j);
            sum += (*((char*)p1 + j) - 48) * cnt;
        }
        k += sprintf(mid, "%d", sum);
        if (i != 3)
            mid[k] = '.';
        if (i != 0)
            strcat(ip, mid);
        else
            strcpy(ip, mid);
        p1 -= 2 * i;
    }
    printf("%s", ip);
    return 0;
}
