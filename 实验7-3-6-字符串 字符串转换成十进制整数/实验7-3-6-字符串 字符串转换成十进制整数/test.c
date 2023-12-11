#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[100]; int flag = 1; int i = 0; int j = 0;
	scanf("%s", str); char a[100]; int sum = 0;
	for (i = 0; str[i]!='#'; i++)
	{
		if ((str[i] >= '0' && str[i] <= '9')
		|| (str[i] >= 'a' && str[i] <= 'f')
		|| (str[i] >= 'A' && str[i] <= 'F') )
			{
			a[j] = str[i];
			j++;
			}
		else if(str[i] == '-'&&j==0&&flag==1)
		{
			flag *= -1;
		}
	}
	int k = 0;
	for (i = 0; i < j; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			sum = sum + (a[i] - '0') * pow(16, j-i-1);
		else if (a[i] >= 'a' && a[i] <= 'f')
			sum = sum + (a[i] - 'a' + 10) * pow(16, j-i-1);
		else
			sum = sum + (a[i] - 'A' + 10) * pow(16, j-i-1);

	}
	printf("%d", flag * sum);
	return 0;
}

