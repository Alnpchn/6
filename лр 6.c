#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>
#include<stdio.h>
#include <locale.h>
#define P 3.14
void main()
{
	int hour;
	int min;
	int sec;
	float s;
	setlocale(LC_ALL, "RUS");
	puts("задание 1\n");
	int years;
	printf("int year:");
	scanf("%d", &years);
	if (years % 4 == 0)
		printf("%d - високосный год\n", years);
	else printf("%d - невисокосный год\n", years);

	puts("задание 2\n");

	float x, F;
	/*
	ïðè x = 0,5 F(x) = -0,25
	ïðè x = 1,5 F(x) = 1,55
	ïðè x = -1,5 F(x) = 1,55
	*/
	printf("input X:");
	scanf("%f", &x);
	F = ((1 >= x) && (x >= 0)) ? (pow(x, 2) - x) : (pow(x, 2) - sin(P * pow(x, 2)));
	printf("F(x)=%.2f", F);

	




}
