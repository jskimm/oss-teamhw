#include <stdio.h>

double sum(double, double); // ±èÁö¼·
double sub(double, double); // ÀÌ»óÈñ
double mul(double, double); // ¾çÀ±¿­
double div(double, double); // Æ¼¿£¾ó½Ö

int main() {
	double x, y;
	printf("input x > "); scanf("%lf", &x);
	printf("input y > "); scanf("%lf", &y);

	printf("x+y=%lf", sum(x,y));
	printf("x+y=%lf", sub(x, y));
	printf("x+y=%lf", mul(x, y));
	printf("x+y=%lf", div(x, y));


	return 0;
}

double sum(double a, double b) // ±èÁö¼·
{
	return (a + b);
}

double sub(double a, double b) // ÀÌ»óÈñ
{
	return (a - b);
}

double mul(double a, double b) // ¾çÀ±¿­
{
	return (a * b);
}

double div(double a, double b) // Æ¼¿£¾ó½Ö
{

}