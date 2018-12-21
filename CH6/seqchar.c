#include <stdio.h>
//문자를 입력하면 순서대로 z까지 출력
int main(void) {
	char first;

	printf("문자를 입력하시오.\n");
	scanf("%c", &first);


	for (int i = (int)first; i <= (int) 'z'; i++) {
		printf("%c", (char)i);
	}

	return 0;
}