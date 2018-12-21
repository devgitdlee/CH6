#include <stdio.h>

int main(void) {
	int a, i, n;
	while (1) {
		printf("숫자를 입력하시오.\n");
		scanf("%d", &n);
		a = 0;
		for (i = 1; i <= n; i++) {
			a = a + i;
		}
		printf("%d\n", a);

	}

	return 0;
}