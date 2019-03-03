#include "stdafx.h"

double power(double x, int n) {
	if (n == 0) return 1;
	return x * power(x, n - 1);
}

void main()
{
	int n = 4;
	double x = 7.0;

	printf("%.2f^%d=%.2f\n", x, n, power(x, n));
}

