#include <stdio.h>
//���ڸ� �Է��ϸ� ������� z���� ���
int main(void) {
	char first;

	printf("���ڸ� �Է��Ͻÿ�.\n");
	scanf("%c", &first);


	for (int i = (int)first; i <= (int) 'z'; i++) {
		printf("%c", (char)i);
	}

	return 0;
}