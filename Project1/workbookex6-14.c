/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)
void main() {
#define TOTAL 5
	char* song[10];
	char newSong[80];
	int i;
	for (i = 0; i < TOTAL; i++) {
		printf("��â�� #%d?", (i + 1));
		gets(newSong);
		song[i] = (char*)malloc((strlen(newSong) + 1 )* sizeof(char));
		strcpy(song[i], newSong);
	}
	printf("***�Է��� �뷡 ����***\n");
	for(int j = (TOTAL - 1); j >= 0; j--) {
		printf("�뷡 #%d: %s \n", (j + 1), song[j]);
		free(song[j]);
	}
}*/