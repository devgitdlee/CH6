#include <stdio.h>

int main(void) {
	int a, i, n;

	scanf("%d", &n);


	for (i = 1; i <= n; i++) {
		if (i == 1) {
			a = i;
		}
		else {
			a = (i - 1) + (i - 2);
		}
		printf("%d,", a);
	}

	return 0;
}