#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[32]; char ip[33]="0"; //str��������ַ���������2���ƣ�ip���������Ľ����
    scanf("%s", str);
    double* p1 = str; int i = 0; int j = 0;//��p1����Ϊdouble*��Ŀ����Ϊ��һ�ο��Է���8���ֽڣ�����һ��ʮ���Ƶ�����
    for (i = 0; i < 4; i++)
    {
        int k = 0;
        int sum = 0; char mid[32]="0";//��sum������ת�����ʮ������ֵ
        p1 += i;
        for (j = 0; j < 8; j++)
        {
            int cnt = pow(2, 7 - j);
            sum += (*((char*)p1 + j)-48) *cnt;//�����p1ת��Ϊchar*��Ŀ����һ�η���һ���ֽڣ����ʰ˴Σ��õ�һ��ѭ����
        }
        k += sprintf(mid, "%d", sum);//sprintf,��sum���뵽�ַ������棬mid���м����
        if(i!=3)
        mid[k] = '.';//��ȥ���һλ��.
        if (i != 0)
            strcat(ip, mid);//��mid׷�ӵ�ip��
        else
            strcpy(ip,mid);//��һ��Ҫ���ơ���Ȼ��ͷ��һ���㡢
        p1 -=i;//��pi������
    }
    printf("%s", ip);
    return 0;
}
