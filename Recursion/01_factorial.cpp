#include "stdafx.h"

int factorial(int k) {
	if (k <= 1) return 1;
	return k * factorial(k - 1);
}

void main()
{
	int k = 6;
	printf("%d!=%d\n", k, factorial(k));
}

