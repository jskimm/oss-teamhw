#pragma warning(disable:4996)
#include <stdio.h>

double sum(double, double); // ������
double sub(double, double); // �̻���
double mul(double, double); // ������
double div(double, double); // Ƽ�����

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

double sum(double a, double b) // ������
{
	return (a + b);
}

double sub(double a, double b) // �̻���
{
	return (a - b);
}

double mul(double a, double b) // ������
{
	return (a * b);
}

double div(double a, double b) // Ƽ�����
{

}