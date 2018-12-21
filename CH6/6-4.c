#include <stdio.h>

int main(void) {
	int a;

	do {
		scanf("%d", &a);
	} while (a < 0);

	for (int i = 0; i < 5; i++) {
		printf("Be Happy\n");
	}

	return 0;
}