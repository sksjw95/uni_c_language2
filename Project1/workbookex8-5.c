/*#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	int ch;
	int str;

	if ((fp == fopen("C:/Users/tjwld/OneDrive/���� ȭ��/�����/1�г�1�б�/C/sample2.txt","r")) == NULL) {
		printf("***������ �� �� �����ϴ�.***");
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