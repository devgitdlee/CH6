#include <stdio.h>

int main(void) {

	int i, count;
	int total = 0;
	while (1) {
		scanf("%d", &count);
		total = 0;
		for (i = 1; i <= count; i++) {
			total += i;
		}

		printf("%d\n", total);
	}
	

	return 0;
}