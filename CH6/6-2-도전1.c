#include <stdio.h>

int main(void) {
	int a, count = 0, answer = 19;
	while (1) {
		printf("���� �Է�(1���� 30����):");
		scanf("%d", &a);

		if (answer > a) {
			printf("%d���� Ů�ϴ�.!\n", a);
		}
		else if (answer < a) {
			printf("%d���� �۽��ϴ�.!\n", a);
		}
		else {
			printf("�����Դϴ�!\n");
			count++;
			break;
		}
		count++;
	}

	printf("�õ��� Ƚ���� %dȸ �Դϴ�.", count);

	return 0;

}