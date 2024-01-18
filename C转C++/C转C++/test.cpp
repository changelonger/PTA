//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>;
//using namespace std;
////int main()
////{
////	int n;
////	cin >> n;
////	cout << "hello word" <<endl;
////	cout << "n的值是:" << n << " "; cout << "n++的值是:" << ++n << endl;
////	return 0;
//// ////cin输入函数，cout输出函数
//// //记住cin>>,cout<<,输入输出不用占位符。
////}
//////int main()
////{
////	bool flag1 = 1;
////	bool flag2 = 0;
////	bool flag3 = -1;
////	cout << flag1 << " " << flag2 << " " << flag3 << endl;
////	return 0;
////}
////class student
////{
////public:
////	string name;//name是共有的，类的外部可以进行读写
////private:
////	int age;//age是私有的。类的内部不可以进行读写；
////};//初学者可以只写public，没有private相当于是结构体；
////int main()
////{
////	student aa;
////	aa.name = "常国龙";
////}
////int main()
////{
////	string s1;
////	string s2;
////	string s3;
//////	cin >> s1,cin >> s2;/*cin>>s1>>s2;*///这里可以这样
//////	s3 = s1 + s2;
//////	cout << s3 ;
////	getline(cin, s1);
////	cout << s1 << endl<< s1.length() << endl;
////	s2 = s1.substr(4,3);
////	cout << s2 << endl;
////	s3 = s1.substr(4);
////	cout << s3 << endl;
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
////int main()
////{
////	int a; int b;
////	cin >> a >> b;
////	cout << "a+b=" << a + b<<endl;
////
////	return 0;
////}
//class stu
//{
//private:
//	int num;
//	int score;
//public:
//	void setdate()
//	{
//		cin >> num >> score;
//	}
//	void display()
//	{
//		cout << "学号：" << num << endl << "成绩：" << score << endl;
//	}
//};//C++的类里面可以包含成员和函数，而C的结构体只可以包含成员；
//int main()
//{
//	stu s1, s2;
//	s1.setdate();
//	s2.setdate();
//	s1.display();
//	s2.display();
//	return 0;
//}
//int main()
//{
//	c
//}
#include<iostream>
#include<iomanip>
using namespace std;
//
//int main()
//{
//	int a = 1;
//	float b = 3.14;
//	char c = 'a';
//	cout << "a=" << setw(6) << a << endl << "b=" << setw(6) << b << endl << "c=" << setw(6) << c << endl;
//	return 0;
//}
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int i, j;
//	cin >> i >> j;
//	swap(i, j);
//	cout << "交换后是：" << i << " " << j << endl;
//	return 0;
//}//把引用变量作为参数传递给函数。
//int main()
//{
//	double p = 3.14;
//	const int& a = p;
//	cout << a;
//	return 0;
//}
//double a = 3.15;
//int main()
//{
//	int a = 5;
//	cout << a << endl;
//	cout << ::a << endl;
//	return 0;
//}
//int main()
//{
//	string s1, s2, s3, temp;
//	cout << "请输入3个字符串" << endl;
//	cin >> s1 >> s2 >> s3;
//	if (s2 > s3)
//		temp = s2; s2 = s3; s3 = temp;
//	if (s1 <= s2)
//		cout << s1 << " " << s2 << " " << s3 << endl;
//	else if(s1<=s3)
//		cout << s2 << " " << s1 << " " << s3 << endl;
//	else 
//		cout << s2 << " " << s3 << " " << s1 << endl;
//	return 0;
//} 
//struct stu
//{
//	string name;
//	int num;
//	string sex;
//};
//int main()
//{
//	stu* p;
//	p = new stu;
//	p->name = "蒋其彤";
//	p->num = 1;
//	p->sex = "女";
//	cout << p->name << endl << p->num << endl << p->sex << endl;
//	delete p;
//	return 0;
//}
//class stu
//{
//public:
//	void setdate();
//	void display();
//private :
//	int age;
//};
//int main()
//{
//	stu s1;
//	s1.setdate();
//	s1.display();
//	return 0;
//}
//void stu::setdate()
//{
//	cout << "请输入数据：";
//	cin >> name >> age;
//}
//void stu::display()
//{
//	cout<<"姓名：" << name << endl<<"年龄：" << age << endl;
//}
//	string  name;
