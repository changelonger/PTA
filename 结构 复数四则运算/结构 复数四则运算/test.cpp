#include"fun.h"
int main()
{
	Plural P1, P2;
	cin >> P1.a >> P1.b >> P2.a >> P2.b;
	Plural p1, p2, p3, p4;
	p1 = Add(P1, P2);
	p2 = Sub(P1, P2);
	p3 = Mul(P1, P2);
	p4 = Div(P1, P2);
	Play(P1);
	printf(" + ");
	Play(P2);
	printf(" = ");
	Display(p1);

	Play(P1);
	printf(" - ");
	Play(P2);
	printf(" = ");
	Display(p2);

	Play(P1);
	printf(" * ");
	Play(P2);
	printf(" = ");
	Display(p3);

	Play(P1);
	printf(" / ");
	Play(P2);
	printf(" = ");
	Display(p4);
	return 0;

}
