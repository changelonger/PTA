#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[80] = {0};
	int count = 0;
	gets(str); int i = 0;
	for (i = 0;i<strlen(str); i++)
	{
		if (isupper(str[i]))
		{
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U');
			else
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int i = 0;
//    char str[] = "Test String.\n";
//    char c;
//    while (str[i])
//    {
//        c = str[i];
//        if (isupper(c)) c = tolower(c);
//        putchar(c);
//        i++;
//    }
//    return 0;
//}