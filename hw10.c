#include <stdio.h>
#include <math.h>
#include <String.h>
typedef struct city {
	char name[20];
	char country[20];
	int population;

}City;


int main() {
	City arr[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++) {
		printf("Name>");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country>");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("Population>");
		scanf_s("%d", &arr[i].population);
	}
	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++) {

		printf("%d.%s in %s with a populaion of %d people:\n",i+1, arr[i].name,arr[i].country,arr[i].population);
	}
	

	
	




	return 0;

}