#include <stdio.h>
#include <math.h>

int main(void) {
	//int  a = 2, i, count;
	int i, j, count;
	scanf("%d", &count);

	for (i = 1, j = count; i <= 10; i++, j *= count) {
		printf("%d�� %d���� %d�Դϴ�.\n", count, i, j);
	}
	/*
	for (i = 1; i <= count; i++) {
		printf("%d�� %d���� %d�Դϴ�.\n", a, i, (int)pow((double)a, (double)i));
	}*/
	return 0;
}