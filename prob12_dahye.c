#include <stdio.h>

int main() {
	float num1, num2;
	scanf_s("%f %f", &num1, &num2);

	printf("%f\n", num1 + num2); // ����
	printf("%f\n", num1 - num2); // ����
	printf("%f\n", num1 * num2); // ����

	if (num2 != 0) {
		printf("%f\n", num1 / num2);
	}
	else {
		printf("0���� ���� �� ����..");
	}

	return 0;
}