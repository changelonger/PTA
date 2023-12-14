#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[32]; char ip[33]="0"; //str是输入的字符串，就是2进制，ip是最后输出的结果；
    scanf("%s", str);
    double* p1 = str; int i = 0; int j = 0;//把p1设置为double*。目的是为了一次可以访问8个字节，就是一个十进制的数。
    for (i = 0; i < 4; i++)
    {
        int k = 0;
        int sum = 0; char mid[32]="0";//用sum来储存转化后的十进制数值
        p1 += i;
        for (j = 0; j < 8; j++)
        {
            int cnt = pow(2, 7 - j);
            sum += (*((char*)p1 + j)-48) *cnt;//这里把p1转化为char*，目的是一次访问一个字节，访问八次，得到一个循环。
        }
        k += sprintf(mid, "%d", sum);//sprintf,把sum输入到字符串里面，mid是中间变量
        if(i!=3)
        mid[k] = '.';//出去最后一位的.
        if (i != 0)
            strcat(ip, mid);//把mid追加到ip中
        else
            strcpy(ip,mid);//第一次要复制。不然开头有一个零、
        p1 -=i;//把pi给返回
    }
    printf("%s", ip);
    return 0;
}
