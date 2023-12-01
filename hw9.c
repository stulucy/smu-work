#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char c[30];
	printf("Input> ");
	fgets(c, sizeof(c), stdin);
	printf("Output> "); 
	for (int i = 0; i < 30; i++){
		if (isupper(c[i])) {
			c[i] = tolower(c[i]);
		}
		else if (islower(c[i])) {
			c[i] = toupper(c[i]);
		}
		//printf("%c", c[i]);
	}
	fputs(c, stdout);
	return 0;
}