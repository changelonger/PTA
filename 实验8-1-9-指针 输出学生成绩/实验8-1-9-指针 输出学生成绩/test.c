#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n; scanf("%d", &n);
    float* p = malloc(n * sizeof(float)); float sum = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", p + i);
    }
    float max = *p; float min = *p;
    for (i = 0; i < n; i++)
    {
        float k = *(p + i);
        sum += k;
        if (k > max)
            max = k;
        if (k < min)
            min = k;
    }
    printf("average = %.2f\n", sum / n);
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);
    free(p);
    return 0;
}