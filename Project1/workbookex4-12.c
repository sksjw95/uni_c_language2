/*#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
void main() {
	unsigned secret_num, guess_num, k, times = 1;
	unsigned again = 1, win = 0;
	char replay;

	printf("** Game Start ** \n");
	while (again) {
		printf("\n= %u ��° ���� = \n", times++);
		secret_num = rand() % 100;

		win = 0;
		k = 1;
		while (k++ <= 7) {
			printf("0���� 99 ������ ���� �Է�: ");
			scanf("%u", &guess_num);
			if (guess_num == secret_num) {
				win = 1;
				k = 8;
			}
			else if (guess_num < secret_num) {
				printf(" %u���� ū ���Դϴ�. \n", guess_num);
			}
			else {
				printf(" %u���� ���� ���Դϴ�. \n", guess_num);
			}
		}
		if (win) {
			printf("����� �̰���ϴ�. �����մϴ�. \n");
		}
		else {
			printf("����� �����ϴ�. %u �����ϴ�. �ٽ� �õ��ϼ���. \n", secret_num);
		}
		printf(" �ٽ� �Ͻðڽ��ϱ�? (y/n) ");
		getchar();
		replay = getchar();
		if (!(replay == 'y' || again == 'Y')) {
			again = 0;
		}
	}
	printf("\n ** Good Bye **\n");
}*/