#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 0;
	int sum = 0;
	while (1) {
		printf("������� N<1000:\n");
		scanf("%u", &n);
		if (n > 1000) {
			printf("������ N>1000:\n");
			return 0;
		}
		while (n != 0) {
			sum += n % 10;
			n /= 10;
		}
		if (sum % 3) {
			printf("����� ����� �� ������ 3\n");
		}
		else {
			printf("����� ����� ������ 3\n");
		}
	}
	return 0;
}