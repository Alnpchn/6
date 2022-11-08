#include<stdio.h>
#include<locale.h>
float main()
{
	setlocale(LC_ALL, "RUS");
	int x, y, n, m, z;
	puts("Введите число <1000");
	scanf("%f", &x);
	y = x / 10;
	z = x / 100;
	n = x % 10;
	m = y + z + n;
	if (m % 3 == 0) {
		printf("Число кратно 3");
	}
	else
		printf("Число не кратно 3");
}
