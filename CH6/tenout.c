#include <stdio.h>
#include <math.h>

int main(void) {
	//int  a = 2, i, count;
	int i, j, count;
	scanf("%d", &count);

	for (i = 1, j = count; i <= 10; i++, j *= count) {
		printf("%d의 %d승은 %d입니다.\n", count, i, j);
	}
	/*
	for (i = 1; i <= count; i++) {
		printf("%d의 %d승은 %d입니다.\n", a, i, (int)pow((double)a, (double)i));
	}*/
	return 0;
}