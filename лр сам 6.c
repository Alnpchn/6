#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 0;
	int sum = 0;
	while (1) {
		printf("Введите N<1000:\n");
		scanf("%u", &n);
		if (n > 1000) {
			printf("Ошибка N>1000:\n");
			return 0;
		}
		while (n != 0) {
			sum += n % 10;
			n /= 10;
		}
		if (sum % 3) {
			printf("Сумма чисел не кратна 3\n");
		}
		else {
			printf("Сумма чисел кратна 3\n");
		}
	}
	return 0;
}