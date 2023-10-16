#include <stdio.h>

void Abc(int n);
int main() {
	int a;
	printf("Please enter a number: ");
	scanf_s("%d", &a);
	Abc(a);
	return 0;
}



void Abc(int n) {
	int r;
	r = n % 2;
	if (n >= 2) {
		Abc(n/2);
	}
	printf("%d",r);
		
}




	