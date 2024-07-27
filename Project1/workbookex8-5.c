/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	int ch;
	int str;

	if ((fp == fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample2.txt","r")) == NULL) {
		printf("***파일을 열 수 없습니다.***");
		exit(0);
	}
	fseek(fp, 1L, SEEK_END);
	for (ch = 0; ch <= 26; ch++) {
		str = getc(fp);
		feek(fp, -2L, SEEK_CUR);
		putchar(str);
	}
	{
		str = getc(fp);
		fseek(fp, -2L,SEEK_CUR);
		str = getc(fp);


}*/