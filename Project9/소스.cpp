#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double a, b;
	int input;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &a, &b);
	printf("�������� ��ȣ ���� 1<+>, 2<->, 3<*>, 4</>: ");
	scanf("%d", &input);

	if (input == 1) {
		printf("%.2f + %.2f = %.2f \n", a, b, a + b);
	}
	else if (input == 2) {
		printf("%.2f - %.2f = %.2f \n", a, b, a - b);
	}
	else if (input == 3) {
		printf("%.2f * %.2f = %.2f \n", a, b, a * b);
	}
	else if (input == 4) {
		printf("%.2f / %.2f = %.2f \n", a, b, a / b);
	}

	return 0;
}