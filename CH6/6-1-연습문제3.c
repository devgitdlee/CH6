#include <stdio.h>

int main(void) {
	int  i = 0;

	do {
		
		if(i % 5 ==0 && i > 0){
			printf("\n");
		}
		printf("*");
		i++;
	} while (i < 15);

	return 0;
}