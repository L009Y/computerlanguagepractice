//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	float a, b;
	printf("Å°(cm) : ");
	scanf(" %f", &a);

	printf("Ã¼Áß(kg) : ");
	scanf(" %f", &b);

	a /= 100;

	printf("BMI = %f", b / (a * a));
}