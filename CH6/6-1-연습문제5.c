#include <stdio.h>

int main(void) {
	int a = 0, b = 0;

	while (1) {
		printf("��� �Է�:");
		scanf("%d", &a);

		if (a <= 0) {
			break;
		}
		else {
			b += a;
		}

	}
	printf("������ �� : %d", b);
}