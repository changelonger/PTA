#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[80]; char str2[80];
	gets(str);
	int i = 0; int len = strlen(str); int j = 0; int flag = 1;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			flag = 1;
			int k = 0;
			for (k = 0; k < j; k++)
			{
				if (str[i] == str[k])
					flag = 0;
			}
			if (flag)
			{
				str2[j] = str[i];
				j++;
			}
		}
		
	}
	if (j == 0)
	{
		printf("Not Found");
	}
	else
	{
		str2[j] = '\0';
		printf("%s", str2);
	}
	
	return 0;
}