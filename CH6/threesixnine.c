#include <stdio.h>

int main(void) {
	int i = 0;
	while (1) {
		printf("%d\n", i);
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			
			printf("짝!\n");
			i++;
			continue;
		}
		else if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
			if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
				printf("짝!");
			}
			printf("짝!\n");
			i++;
			continue;
		}
		if (i == 100) break;
		i++;

	}

	return 0;
}