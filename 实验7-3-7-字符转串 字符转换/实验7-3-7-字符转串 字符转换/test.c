#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[100]; int i = 0; int j = 0;
	gets(str);
	char a[100]; int sum = 0;
	for (i = 0;i<strlen(str);i++)
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			a[j] = str[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		sum = sum + (a[i] - '0') * pow(10, j - i - 1);
	}
	printf("%d", sum);
	return 0;
}