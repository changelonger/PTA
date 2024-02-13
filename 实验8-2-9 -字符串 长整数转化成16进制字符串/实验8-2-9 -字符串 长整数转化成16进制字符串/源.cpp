#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdio.h>
#define MAXN 10

void f(long int x, char* p);

int main()
{
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void f(long int x, char* p) {
	if (x == 0) *p++ = '0';
	else {
		int len = 0;
		long int temp = x;
		while (temp) {
			len++;
			temp /= 16;
		}
		if (x < 0) {
			x = -x;
			*p = '-';
			len++;
		}
		for (int i = 0; x; i++) {
			int d = x % 16;
			if (d > 9) *(p + len - 1 - i) = d - 10 + 'A';
			else *(p + len - 1 - i) = d + '0';
			x /= 16;
		}
	}
}

