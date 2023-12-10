#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str [80];
	gets(str);
	int len = strlen(str);
	int i;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 155 - str[i];
		}
	}
	puts(str);
	printf("\n");
	return 0;
}
