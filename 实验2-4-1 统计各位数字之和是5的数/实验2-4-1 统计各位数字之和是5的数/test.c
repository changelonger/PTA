#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdio.h>
int is(int number);
void count_sum(int a, int b);
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

/* 你的代码将被嵌在这里 */
int is(int number)
{
    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number = number / 10;
    }
    if (sum == 5)
        return 1;
    else
        return 0;
}
void count_sum(int a, int b)
{

    int i = a; int sum = 0; int count = 0;
    for (i = a; i <= b; i++)
    {
        if (is(i))
        {
            sum += i;
            count++;
        }
    }
    printf("count = %d, sum = %d", count, sum);
}
