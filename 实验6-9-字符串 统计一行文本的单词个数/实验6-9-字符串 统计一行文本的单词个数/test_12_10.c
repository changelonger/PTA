#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[1000];//�ַ�����
    gets(a);//��ȡ�ַ���
    int i;//ѭ������
    int l;//��¼�ַ�������
    int num = 0;//��������
    for (i = 0; a[i] != '\0'; i++);//��¼�ַ�������
    l = i;
    for (i = 0; i < l; i++)//ѭ���ж�
    {
        if (a[i] != ' ' && a[i + 1] == ' ')//����[?][�ո�]�����
            num++;
        if (a[i] != ' ' && a[i + 1] == '\0')//����[?]['\0']�����
            num++;
    }
    printf("%d\n", num);
    return 0;
}


