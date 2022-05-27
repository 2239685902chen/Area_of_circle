#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double q = 0, w = 3.14, e = 0, r = 0;
	scanf("%lf", &q);
	e = pow(q, 2);
	r = e * w;
	printf("%lf\n", r);
	return 0;
}