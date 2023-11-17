#include <stdio.h>
#include <math.h>>


double Standard(int* num) {
	int sum = 0;
	double avg = 0;
	double a = 0;
	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	avg = (sum / 5.0);
	for (int i = 0; i < 5; i++) {
		a+=pow(num[i]-avg,2);
	}
	return sqrt(a / 5.0);
}


int main() {
	int num[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d",&num[i]);
	}
	printf("Standard Deviation = %.3f",Standard(num));


	return 0;
}