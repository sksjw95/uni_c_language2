/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	int ch;
	if ((fp = fopen("C:/Users/tjwld/OneDrive/���� ȭ��/�����/1�г�1�б�/C/sample3.txt", "w+")) == NULL) {
		printf("***������ �� �� �����ϴ�.***");
		exit(0);
	}
	for (ch = 65; ch <= 92; ch++) {
		putc(ch, fp);
	}
	fseek(fp, 8L, SEEK_SET);
	ch = getc(fp);
	printf("9��° ���ڴ� c%\n", ch);
	fseek(fp, 16L, SEEK_SET);
	ch = getc(fp);
	printf("17��° ���ڴ� %c\n", ch);
	fclose(fp);
	return;
}*/