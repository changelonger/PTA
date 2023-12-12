#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define maxn 80
int main()
{
	char s[maxn], min[maxn];
	int n;
	scanf("%d", &n);
	getchar();
	gets(s);
	strcpy(min, s);
	for (int i = 1; i < n; i++) {
		gets(s);
		if (strcmp(min, s) > 0) {
			strcpy(min, s);
		}
	}
	printf("Min is: %s", min);
	return 0;
}
