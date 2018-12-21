#include <stdio.h>

int main(void) {

	int i, j, k, count;
	for (i = 0; i < 5; i++) {
		count = 1;
		for (j = 0; j < 4; j++) {
			if (j >= i) printf(" ");
		}
		for (k = 0; k < (2 * i + 1); k++) {
			
			printf("%d", count);
			count++;
		}
		printf("\n");

	}
	/*
	for (i = 0; i < 5; i++) {
		for (j = 4; j >= 0; j--) {
			if (j > i) {
				printf(" ");
			}
			else {
				count++;
				printf("%d", count);
			}
		}
		for (k = 0; k < 5; k++) {
			if (k < i) {
				count++;
				printf("%d",count);
			}
		}
		printf("\n");
		count = 0;

	}
	*/
	return 0;
}