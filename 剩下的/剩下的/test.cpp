//#pragma execution_character_set("utf-8") 
#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//////#include<iostream>
//////using namespace std;
////////struct Time
////////{
////////    int h;
////////    int m;
////////    int s;
////////};
////////int main()
////////{
////////    Time t;
////////    scanf("%d:%d:%d", &t.h, &t.m, &t.s);
////////    int s;
////////    getchar();
////////    cin >> s;
////////    
////////    if (t.s + s < 60)
////////        cout << t.h << ":" << t.m << ":" << t.s + s;
////////    else
////////    {
////////        if (t.m + 1 < 60)
////////            cout << t.h << ":" << t.m + 1 << ":" << t.s + s - 60;
////////        else
////////        {
////////            if (t.h < 23)
////////                printf("%02d:%02d:%02d", t.h, 0, t.s + s - 60);
////////            else
////////                printf("%02d:%02d:%02d", 0, 0, t.s + s - 60);
////////        }
////////
////////    }
////////    return 0;
////////}
//////#include<vector>
//////struct student
//////{
//////	
//////	char name[10];
//////	char  num[5];
//////	double s;
//////};
//////int main()
//////{
//////	student stu[10];
//////	int n; scanf("%d", &n); double ave = 0;
//////	for (int i = 0; i < n; i++)
//////	{
//////		getchar();
//////		cin >> stu[i].num >> stu[i].name >> stu[i].s;
//////		ave += stu[i].s;
//////	}
//////	ave /= n;
//////	cout<<ave<<endl;
//////	for (int i = 0; i < n; i++)
//////	{
//////		if (stu[i].s < ave)
//////		{
//////			printf("%s %s\n", stu[i].name, stu[i].num);
//////		}
//////	}
//////	
//////	return 0;
//////}
//////#include<iostream>
//////#include<algorithm>
//////#include<stdio.h>
//////#include<string>
//////#include<vector>
//////using namespace std;
//////struct Book
//////{
//////    string name;
//////    double price;
//////};
//////bool com(Book b1, Book b2)
//////{
//////    return b1.price < b2.price;
//////}
//////int main()
//////{
//////    int n;
//////    cin >> n;
//////    Book book[n];
//////    for (int i = 0; i < n; i++)
//////    {
//////        getchar();
//////        getline(cin,book[i].name);
//////        cin >> book[i].price;
//////    }
//////    sort(book, book+n, com);
//////    cout << book[n - 1].price << "," << book[n-1].price << endl;
//////    cout << book[0].price << "," << book[0].price << endl;
//////    return 0;
//////}
//////#include<iostream>
//////#include<string>
//////using namespace std;
//////struct Student
//////{
//////    
//////    string name;
//////    string num;
//////    int a, b, c;
//////    int sum;
//////    
//////};
//////int main()
//////{
//////    int n; cin >> n;
//////    Student stu[10];
//////    int max = 0;
//////    for (int i = 0; i < n; i++)
//////    {
//////
//////        getchar();
//////        cin >>stu[i].num>>stu[i].name >> stu[i].a >> stu[i].b >> stu[i].c;
//////        stu[i].sum = stu[i].a + stu[i].b + stu[i].c;
//////        if (stu[i].sum > max)
//////            max = stu[i].sum;
//////    }
//////    int i = 0;
//////    for (i = 0; i < n; i++)
//////    {
//////        if (stu[i].sum == max)
//////            break;
//////    }
//////    cout << stu[i].name << ' ' << stu[i].num << ' ' << stu[i].sum;
//////    return 0;
//////}
//////#include<iostream>
//////using namespace std;
//////struct num
//////{
//////    int a;
//////    int b;
//////    double val;
//////};
//////int main()
//////{
//////    num n[2];
//////    for (int i = 0; i < 2; i++)
//////    {
//////        cin >> n[i].a;
//////        getchar();
//////        cin >> n[i].b;
//////    }
//////    cout << n[0].a << '/' << n[0].b;
//////    n[0].val = 1.0*n[0].a / n[0].b ;
//////    n[1].val = 1.0*n[1].a / n[1].b ;
//////    if (n[0].val > n[1].val)
//////        cout << " > ";
//////    else if (n[0].val < n[1].val)
//////        cout << " < ";
//////    else
//////        cout << " = ";
//////    cout << n[1].a << '/' << n[1].b;
//////    return 0;
////
//////#include<iostream>
//////using namespace std;
//////struct num
//////{
//////    int a, b;
//////};
//////int main()
//////{
//////    num n[3];
//////    int i = 0;
//////    for (i = 0; i < 2; i++)
//////    {
//////        char m;
//////        cin >> n[i].a >> m >> n[i].b;
//////
//////    }
//////    n[2].a = (n[0].a * n[1].b) + (n[1].a * n[0].b);
//////    n[2].b = n[0].b * n[1].b;
//////    int c = 0; int x = n[2].a; int y = n[2].b;
//////    while (x % y)
//////    {
//////        c = x % y;
//////        y = x;
//////        x = c;
//////    }
//////    if (n[2].a / y * y == n[2].a && n[2].b / y * y == n[2].b)
//////    {
//////        n[2].a /= y;
//////        n[2].b /= y;
//////    }
//////    if (n[2].b == 1)
//////    {
//////        cout << n[2].a;
//////    }
//////    else
//////    {
//////        cout << n[2].a << "/" << n[2].b;
//////    }
//////    return 0;
//////}
////#include<iostream>
////using namespace std;
////struct num
////{
////    long int a=0, b=1;
////};
////int main()
////{
////    int n;
////    num f[100]; 
////    num fen{ 0,1 };
////    cin >> n;
////    for (int i = 0; i < n; i++)
////    {
////        char s;
////        cin >> f[i].a >> s >> f[i].b;
////        fen.a = f[i].b * fen.a + fen.b * f[i].a;
////        fen.b = fen.b * f[i].b;
////    }
////    fen.b *= n;
////    long int x =  fen.a; long int y = fen.b; long int c;
////    while (x % y)
////    {
////        c = x % y;
////        x = y;
////        y = c;
////    }
////    if (fen.a / y * y == fen.a && fen.b / y * y == fen.b)
////    {
////        fen.a /= y;
////        fen.b /= y;
////    }
////    if (fen.b == 1)
////    {
////        cout << fen.a;
////    }
////    else
////    {
////        cout << fen.a << "/" << fen.b;
////    }
////    return 0;
////}
////void VolBall(double r)
////{
////    printf("%.2f\n", 4 / 3.0 * 3.1415926 * r * r * r);
////}
////void VolCylinder(double r, double h)
////{
////    printf("%.2f\n", 3.1415926 * r * r * h);
////}
////void VolCone(double r, double h)
////{
////    printf("%.2f\n", 3.1415926 * r * r * h / 3);
////}
////void menu()
////{
////    printf("1-Ball\n");
////    printf("2-Cylinder\n");
////    printf("3-Cone\n");
////    printf("other-Exit\n");
////    printf("Please enter your command:\n");
////}
////int main()
////{
////    int flag = 1;
////    do
////    {
////        menu();
////        int n;
////        scanf("%d", &n);
////        double r = 0, h = 0;
////        switch (n)
////        {
////        case 1:
////            printf("Please enter the radius:\n");
////            scanf("%lf", &r);
////            VolBall(r);
////            break;
////        case 2:
////            printf("Please enter the radius and the height:\n");
////            scanf("%lf%lf", &r, &h);
////            VolCylinder(r, h);
////            break;
////        case 3:
////            printf("Please enter the radius and the height:\n");
////            scanf("%lf%lf", &r, &h);;
////            VolCone(r, h);
////            break;
////        default:
////            flag = 0;
////            break;
////        }
////    } while (flag);
////    return 0;
////}
////#include<iostream>
////#include<string>
////#include<algorithm>
////using namespace std;
////bool com(string s1, string s2)
////{
////    return s1.length() < s2.length();
////}
////using namespace std;
////int main()
////{
////    string s[22]; int i = 0;
////    int count = 0;
////    for (int i = 0;; i++)
////    {
////        cin >> s[i];
////        getchar();
////        if (s[i][0] == '#')
////            break;
////        count++;
////    }
////    sort(s, s + count, com);
////    for (int i = 0; i < count; i++)
////    {
////        cout << s[i] << " ";
////    }
////    return 0;
////}
////#include <iostream>
////#include <string>
////using namespace std;
//// 
//#include <iostream>
//#include <string>
//using namespace std;
////
////int main() {
////    string line[4]; // 使用 string 存储每行诗句
////
////    // 读入四句诗
////    for (int i = 0; i < 4; ++i) {
////        getline(cin, line[i]); // 使用 cin 读取输入
////    }
////
////    // 取出每句的第一个汉字并连接在一起
////    for (int i = 0; i < 4; ++i) {
////        cout << line[i][0] << line[i][1] << line[i][2]; // 输出每句的前三个字节
////    }
////
////    cout << endl; // 输出换行符
////
////    return 0;
////}
////#include <stdio.h>
////#define MAXS 20
////
////void f(char* p);
////
////int main()
////{
////    
////    char s[] = "Hello World!";
////    f(s);
////    return 0;
////}
////
/////* 你的代码将被嵌在这里 */
////void f(char* p)
////{
////    int n = 0;
////    char* s = p;
////    while ((*p) != '\0')
////    {
////        p++;
////        n++;
////    }
////    p = s;
////    for (int i = 0; i < n / 2; i++)
////    {
////        char a = p[i];
////        p[i] = p[n - i - 1];
////        p[n - i - 1] = a;
////    }
////}
////void strmcpy(char* t, int m, char* s) {
////    int i = 0;
////    while (t[i]) {
////        i++;
////    }
////    int n = i;
////    if (m <= n) {
////        int j = 0;
////        for (int i = m - 1; i < n && s[j] != '\0'; i++) {
////            t[i] = s[j];
////            j++;
////        }
////    }
////    else {
////        return;
////    }
////}
////int main()
////{
////    char t[20] = "h";
////    char s[20];
////    strmcpy(t, 1, s);
////	return 0;
////}
////void dectobin(int n)
////{
////	if (n / 2 > 0)  // 若下一次递归调用的时候 n 不是零
////		dectobin(n / 2); //那么调用递归
////	printf("%d", n % 2); //否则从下一次调用递归n是0的那次递归开始输出
////}
////int main()
////{
////	dectobin(12);
////	return 0;
////}
////char* search(char* s, char* t)
////{
////    for (int i = 0; s[i] != '\0'; i++)
////    {
////
////        if (s[i] == t[0])
////        {
////            int j = 0;
////            int k = i;
////            for (j = 1; t[j] != '\0' && s[k] != '\0'; j++)
////            {
////
////                
////                if (s[k] != t[j])
////                    break;
////                k++;
////            }
////            if (t[j] == '\0')
////                return s + i;
////        }
////    }
////    return NULL;
////}
////int main()
////{
////	char s[30] = "The C Programming Language";
////	char t[4] = "ram";
////    search(s, t);
////	return 0;
////}
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////
////struct stud_node {
////    int    num;
////    char   name[20];
////    int    score;
////    struct stud_node* next;
////};
////struct stud_node* head, * tail;
////
////void input();
////
////int main()
////{
////    struct stud_node* p;
////
////    head = tail = NULL;
////    input();
////    for (p = head; p != NULL; p = p->next)
////        printf("%d %s %d\n", p->num, p->name, p->score);
////
////    return 0;
////}
////
/////* 你的代码将被嵌在这里 */
////void input()
////{
////    struct stud_node* p = (struct stud_node*)malloc(sizeof(struct stud_node));
////    head= p;
////    while (1)
////    {
////        struct stud_node* q = (struct stud_node*)malloc(sizeof(struct stud_node));
////        scanf("%d", &p->num);
////        if (p->num == 0)
////        {
////            tail = q;
////            break;
////        }
////        getchar();
////        scanf("%s%d", p->name, &p->score);
////        q->next = p;
////        q = q->next;
////
////    }
////}
//
//
////
////#include <stdio.h>
////#include <stdlib.h>
////
////struct stud_node {
////    int    num;
////    char   name[20];
////    int    score;
////    struct stud_node* next;
////};
////
////struct stud_node* createlist();
////struct stud_node* deletelist(struct stud_node* head, int min_score);
////
////int main()
////{
////    int min_score;
////    struct stud_node* p, * head = NULL;
////
////    head = createlist();
////    scanf("%d", &min_score);
////    head = deletelist(head, min_score);
////    for (p = head; p != NULL; p = p->next)
////        printf("%d %s %d\n", p->num, p->name, p->score);
////
////    return 0;
////}
////
/////* 你的代码将被嵌在这里 */
////struct stud_node* createlist()
////{
////    struct stud_node* head;
////    struct stud_node* p = (struct stud_node*)malloc(sizeof(struct stud_node));
////    head = p;
////    while (1)
////    {
////        struct stud_node* q = (struct stud_node*)malloc(sizeof(struct stud_node));
////        scanf("%d", &q->num);
////        if (q->num == 0)
////        {
////            p->next = NULL;
////            break;
////        }
////        getchar();
////        scanf("%s%d", q->name, &q->score);
////        p->next = q;
////        p = q;
////    }
////    return head->next;
////}
////struct stud_node* deletelist(struct stud_node* head, int min_score)
////{
////    struct stud_node* p = (struct stud_node*)malloc(sizeof(struct stud_node));
////    p->next = head;
////    head = p;
////    while (p->next)
////    {
////        if (p->next->score < min_score)
////        {
////            if (p->next->next)
////            {
////                struct stud_node* q = p->next;
////                p->next = q->next;
////                free(q);
////            }
////            else
////            {
////                p->next = NULL;
////                break;
////            }
////
////        }
////        else
////            p = p->next;
////    }
////    return head->next;
////}
////#include <stdio.h>
////#include <stdlib.h>
////
////struct ListNode {
////    int data;
////    struct ListNode* next;
////};
////
////struct ListNode* readlist();
////struct ListNode* getodd(struct ListNode** L);
////void printlist(struct ListNode* L)
////{
////    struct ListNode* p = L;
////    while (p) {
////        printf("%d ", p->data);
////        p = p->next;
////    }
////    printf("\n");
////}
////
////int main()
////{
////    struct ListNode* L, * Odd;
////    L = readlist();
////    Odd = getodd(&L);
////    printlist(Odd);
////    printlist(L);
////
////    return 0;
////}
////
/////* 你的代码将被嵌在这里 */
////struct ListNode* readlist()
////{
////    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
////    struct ListNode* head = p;
////    while (1)
////    {
////        struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
////        scanf("%d", &q->data);
////        if (q->data == -1)
////        {
////            p->next = NULL;
////            break;
////        }
////        p->next = q;
////        p = q;
////    }
////    return head->next;
////}
////struct ListNode* getodd(struct ListNode** L)
////{
////    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
////    struct ListNode* a = (struct ListNode*)malloc(sizeof(struct ListNode));
////    struct ListNode* b = (struct ListNode*)malloc(sizeof(struct ListNode));
////    b = a;
////    p->next = (*L);
////    (*L) = p;
////    while (p->next)
////    {
////        if (p->next->data % 2 == 1)
////        {
////            if (p->next->next)
////            {
////                struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
////                q->data = p->next->data;
////                q->next = NULL;
////                a->next = q;
////                a = q;
////                p->next = p->next->next;
////            }
////            else
////            {
////                a->next = p->next;
////                p->next = NULL;
////            }
////        }
////        else if (p->next)
////            p = p->next;
////    }
////    (*L) = (*L)->next;
////    return b->next;
////}
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* readlist();
//struct ListNode* deletem(struct ListNode* L, int m);
//void printlist(struct ListNode* L)
//{
//    struct ListNode* p = L;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int m;
//    struct ListNode* L = readlist();
//    scanf("%d", &m);
//    L = deletem(L, m);
//    printlist(L);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//struct ListNode* readlist()
//{
//    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* head = p;
//    while (1)
//    {
//        struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &q->data);
//        if (q->data == -1)
//        {
//            p->next = NULL;
//            break;
//        }
//        p->next = q;
//        p = q;
//    }
//    return head->next;
//}
//struct ListNode* deletem(struct ListNode* L, int m)
//{
//    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
//    p->next = L;
//    while (p->next)
//    {
//        if (p->next->data == m)
//        {
//            if (p->next->next)
//            {
//                struct ListNode* q = p->next;
//                p->next = q->next;
//                free(q);
//
//            }
//            else
//            {
//                p->next = NULL;
//            }
//        }
//        else
//            p = p->next;
//    }
//    return L;
//}
//struct ListNode* readlist()
//{
//    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* head = p;
//    while (1)
//    {
//        struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &q->data);
//        if (q->data == -1)
//        {
//            p->next = NULL;
//            break;
//        }
//        p->next = q;
//        p = q;
//    }
//    return head->next;

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* readlist(); /*裁判实现，细节不表*/
struct ListNode* reverse(struct ListNode* head);
void printlist(struct ListNode* head)
{
    struct ListNode* p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* head;

    head = readlist();
    head = reverse(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* readlist()
{
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head = p;
    while (1)
    {
        struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d", &q->data);
        if (q->data == -1)
        {
            p->next = NULL;
            break;
        }
        p->next = q;
        p = q;
    }
    return head->next;
}
struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
    p = head;
    struct ListNode* f = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* b = f;
    while (p)
    {
        struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
        q->data = p->data;
        q->next = f;
        f = q;
        p = p->next;
    }
    return f;
}