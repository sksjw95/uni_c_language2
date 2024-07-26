/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	int ch;
	if ((fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample3.txt", "w+")) == NULL) {
		printf("***파일을 열 수 없습니다.***");
		exit(0);
	}
	for (ch = 65; ch <= 92; ch++) {
		putc(ch, fp);
	}
	fseek(fp, 8L, SEEK_SET);
	ch = getc(fp);
	printf("9번째 문자는 c%\n", ch);
	fseek(fp, 16L, SEEK_SET);
	ch = getc(fp);
	printf("17번째 문자는 %c\n", ch);
	fclose(fp);
	return;
}*/