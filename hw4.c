#include <stdio.h>

int main() {
	int num;
	printf("Please enter a number: ");
	scanf_s("%u", &num);
	
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("it is not a prime number");
			break;
		}
		else if (i == num - 1) {
			printf("it is a prime number");
		}
	}
	
	
		
	


	return 0;
}