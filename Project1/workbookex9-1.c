/*#include<stdio.h>
#include<stdlib.h>
void main() {
	char* str[5];
	int i;

	for (i = 0; i < 5; i++) {
		if ((str[i] = (char*)malloc(128)) == NULL) {
			printf("�޸� �Ҵ� ���� \n");
			exit(0);
		}
		printf("�޸� �Ҵ� ����, ���ڿ�[%d]�� �Է��ϼ���. \n", i + 1);
		gets(str[i]);
	}
	for (i = 0; i < 5; i++) {
		free(str[i]);
	}
}*/