#include <stdio.h>

int main(void) {

	int i, j, k;

	for (i = 0; i < 10; i++) {
		for (j = 4; j >= 0; j--) {
			if (j > i) {
				printf(" ");
			}
			else {
				printf("*");
			}
			/*
			if (j == i) {
				printf("*");
			}
			else {
				printf("@");
			}
			*/
		}
		for (k = 0; k < 5; k++) {
			if (k < i) printf("*"); 
		}
		/*
		for (k = 0; k < 5; k++) {
			if (k < i) printf("*");
		}
		*/
		printf("\n");

	}

	return 0;
}