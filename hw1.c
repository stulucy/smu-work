#include<stdio.h>

int main(void) {

	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("10 & 15 : %d\n", num1&num2);
	printf("10 | 15 : %d\n", num1|num2);
	printf("10 ^ 15 : %d\n", num1^num2);

	return 0;
}
