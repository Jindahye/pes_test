#include <stdio.h>

int main() {
	float num1, num2;
	scanf_s("%f %f", &num1, &num2);

	printf("%f\n", num1 + num2); // µ¡¼À
	printf("%f\n", num1 - num2); // »¬¼À
	printf("%f\n", num1 * num2); // °ö¼À

	if (num2 != 0) {
		printf("%f\n", num1 / num2);
	}
	else {
		printf("0À¸·Î ³ª´­ ¼ö ¾øÀ½..");
	}

	return 0;
}