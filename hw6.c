#include<stdio.h>

int main(void) {


	int arri[5], odd[5] = { 0 }, even[5] = { 0 };
	int k = 0,l = 0;
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arri[i]);
		if (arri[i] % 2 == 0) {
			odd[k] = arri[i];
			k++;
		}
		else {
			even[l] = arri[i];
			l++;
		}
	}
	printf("Odd numbers:");
	for(int i=0;i<k;i++){
		printf(" %d",odd[i]);

	}
	printf("\n");
	printf("Even numbers:");
	for (int i = 0; i < l; i++) {
		printf(" %d", even[i]);

	}
	
	
	return 0;
}