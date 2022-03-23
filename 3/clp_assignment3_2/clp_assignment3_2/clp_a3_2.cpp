//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 values: ");
	scanf(" %d %d %d", &a, &b, &c);

	printf("%6d\n", a);
	printf("%6d\n", b);
	printf("%6d\n", c);
	printf("--------\n");
	printf("%6d\n", a + b + c);
	printf("%6.1f\n", (a + b + c)/3.0);
}