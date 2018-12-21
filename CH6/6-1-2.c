#include <stdio.h>

int main(void)
{
	int i, j, count;
	scanf("%d", &count);

	for (i = 0, j = 0; i < count; i++, j += 2) {
		printf("%3d %3d : Be happy!\n", i + 1, j + 1);
	}

	return 0;
}