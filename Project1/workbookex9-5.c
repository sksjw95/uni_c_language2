/*#include<stdio.h>
#include<stdlib.h>
void main() {
	char* str;
	int c = 0, w = 0;
	str = (char*)malloc(128);

	gets(str);
	do {
		if (*str == ' ' || *str == "\t") {
			w++;
		}
		c++;

	} while (*str++ != NULL);

	printf("\n\n문자 수 = %d",c-1);
	printf("\n\n단어 수 = %d", w+1);

}*/