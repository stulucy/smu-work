#include<stdio.h>

int main() {
	int arr1[6] = { 1,2,3,4,5,6};
	int arr2[6] = { 7,8,9,10,11,12};

	int* p = arr1;
	int* q = arr2;
	int tmp = 0;
	
	printf("arr1:");
	for (int i = 0; i < 6; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("arr1:");
	for (int i = 0; i < 6; i++) {
		printf("%3d", arr2[i]);
	}

	for (int i = 0; i < 6; i++) {
		tmp = *q;
		*q = *p;
		*p = tmp;
		p++;
		q++;
	}
	printf("\n");
	printf("after swap\n");
	printf("arr1:");
	for (int i = 0; i < 6; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");
	printf("arr1:");
	for (int i = 0; i < 6; i++) {
		printf("%3d", arr2[i]);
	}
	
	return 0;
}