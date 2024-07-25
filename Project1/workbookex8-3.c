/*#include<stdio.h>
#include<conio.h>
#pragma warning(disable:4996)
void main() {
	char c;
	FILE* fp;

	fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample2", "w");
	for (c = 'A'; c <= 'Z'; c++) {
		fputc(c, fp);
	}

	getch();
	fclose(fp);

	fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample2", "r");
	while (!feof(fp)) {
		printf("%c", c = fgetc(fp));
	}
	fclose(fp);
}*/