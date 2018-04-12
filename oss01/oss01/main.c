#pragma warning(disable:4996)
#include <stdio.h>

double sum(double, double); // 김지섭
double sub(double, double); // 이상희
double mul(double, double); // 양윤열
double div(double, double); // 티엔얼쌍

int main() {
	double x, y;
	printf("input x > "); scanf("%lf", &x);
	printf("input y > "); scanf("%lf", &y);

	printf("x+y=%.2lf\n", sum(x,y));
	printf("x-y=%.2lf\n", sub(x, y));
	printf("x*y=%.2lf\n", mul(x, y));
	printf("x/y=%.2lf\n", div(x, y));

	return 0;
}

double sum(double a, double b) // 김지섭
{
	return (a + b);
}

double sub(double a, double b) // 이상희
{
	return (a - b);
}

double mul(double a, double b) // 양윤열
{
	return (a * b);
}

double div(double a, double b) // 티엔얼쌍
{
	return(a / b);

}
