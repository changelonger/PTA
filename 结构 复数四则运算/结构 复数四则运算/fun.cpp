#include"fun.h"
Plural Add(Plural a, Plural b)
{
	Plural p;
	p.a = a.a + b.a;
	p.b = a.b + b.b;
	p.a = round(p.a * 10) / 10;
	p.b = round(p.b * 10) / 10;
	return p;
}
Plural Sub(Plural a, Plural b)
{
	Plural p;
	p.a = a.a - b.a;
	p.b = a.b - b.b;
	p.a = round(p.a * 10) / 10;
	p.b = round(p.b * 10) / 10;
	return p;
}
Plural Mul(Plural a, Plural b)
{
	Plural p;
	p.a = a.a * b.a - a.b * b.b;//ac-bd
	p.b = a.b * b.a + a.a * b.b;//bc+ad
	p.a = round(p.a * 10) / 10;
	p.b = round(p.b * 10) / 10;
	return p;
}
Plural Div(Plural a, Plural b)
{
	Plural p;
	p.a = (a.a * b.a + a.b * b.b) / (b.a * b.a + b.b * b.b);
	p.b = (a.b * b.a - a.a * b.b) / (b.a * b.a + b.b * b.b);
	p.a = round(p.a * 10) / 10;
	p.b = round(p.b * 10) / 10;
	return p;
}
void Display(Plural p)
{
	if (p.b < 0)
	{
		if (p.a)
			printf("%.1f%.1fi\n", p.a, p.b);
		else
			printf("%.1fi\n", p.b);
	}
	else if (p.b > 0)
	{
		if(p.a)
			printf("%.1f+%.1fi\n", p.a, p.b);
		else
			printf("%.1fi\n", p.b);
	}
	else
	{
		if (p.a)
			printf("%.1f\n", p.a);
		else
			printf("0.0\n");
	}
}
void Play(Plural p)
{
	if (p.b < 0)
	{
		printf("(%.1f%.1fi)", p.a, p.b);
	}
	else if (p.b > 0)
	{

		printf("(%.1f+%.1fi)", p.a, p.b);
	}
	else
	{
		printf("(%.1f+0.0i)", p.a);

	}
}