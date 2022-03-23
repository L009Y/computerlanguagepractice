//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	int no;

	printf("enter no: ");
	scanf(" %d", &no);

	printf("%d, %03o, %#x", no, no, no);


}