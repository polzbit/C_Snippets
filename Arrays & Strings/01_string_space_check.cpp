﻿#include "stdio.h"

void main()
{
	int i = 0;
	int count = 0;
	char str[] = "Hello World";
	char check[] = " ";

	while (str[i]){
		if (str[i++] == check[0]) {
			++count;
		}
	}
	printf("Number of spaces in string: %d\n", count);
}

