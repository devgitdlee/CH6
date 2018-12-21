#include <stdio.h>

int main(void) {
	int a, count = 0, answer = 19;
	while (1) {
		printf("숫자 입력(1부터 30까지):");
		scanf("%d", &a);

		if (answer > a) {
			printf("%d보다 큽니다.!\n", a);
		}
		else if (answer < a) {
			printf("%d보다 작습니다.!\n", a);
		}
		else {
			printf("정답입니다!\n");
			count++;
			break;
		}
		count++;
	}

	printf("시도한 횟수는 %d회 입니다.", count);

	return 0;

}