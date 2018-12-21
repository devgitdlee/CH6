#include <stdio.h>

int main(void) {
	int i,j, n, cnt = 0;

	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		for (j = 2; j < n; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d,", i);
			cnt++;
			if (cnt == 5) {
				cnt = 0;
				printf("\n");
			}
		}
	}

	return 0;

}