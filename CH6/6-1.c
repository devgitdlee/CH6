#include <stdio.h>

int main(void) {
	int a = 0;
	int count;
	scanf("%d", &count);

	while (a < count) {
		++a;//a++;
		printf("%d, YESorYES\n", a);
	}

	return 0;
}