#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void printb(char(*p)[10],int n)
{
	int i = 0; int j = 0;
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			if (j != 2 * n)
				printf("%c ", p[i][j]);
			else
				printf("%c", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	char arr[10][10] = { 0 };
	int n; scanf("%d", &n); int count = 0; int fcount = 0; char bs; scanf("%c", &bs); int k;
	int i;
	for (i = 0; i < 2*n; i++)
	{
		int j = 0;
		for (j = 0; j < 2 * n; j++)
		{
			scanf("%c", &arr[i][j]);
			scanf("%c", &bs);
		}
	}
	scanf("%d", &k); scanf("%c", &bs); int line = 1;
	while (line <= k)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (arr[a-1][b-1] == arr[c-1][d-1]&& arr[c - 1][d - 1]!='*')
		{
			arr[a - 1][b - 1] = '*';
			arr[c - 1][d - 1] = '*';
			count++;
			if (count == 2 * n * n)
			{
				printf("Congratulations!");
				break;
			}
			printb(arr, n);
		}
		else 
		{
			printf("Uh-oh\n");
			fcount++;
			if (fcount == 3)
			{
				printf("Game Over");
				break;
			}
		}
		line++;
	}


	return 0;
}
