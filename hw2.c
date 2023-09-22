#include<stdio.h>

int main() {

	double a;

	printf("Please enter kiometers :");
	scanf_s("%lf", &a);
	printf("%.1f km is equal to %.1f miles",a,a/1.609);


	return 0;
}