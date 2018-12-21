#include <stdio.h>

int main(void) {
	int a = 0, b = 0;

	while (1) {
		printf("양수 입력:");
		scanf("%d", &a);

		if (a <= 0) {
			break;
		}
		else {
			b += a;
		}

	}
	printf("누적된 값 : %d", b);
}