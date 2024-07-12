/*#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#pragma warning(disable:4996)
void main() {
	char code[] = "5js7un9poqrwx3zadthec4kmv";
	char ch[100];
	int i = 0;

	for (; (ch[i] = getche()) != '\r';) {
		if (isupper(ch[i])) {
			ch[i++] = code[ch[i] - 65];
		}
		else {
			i++;
		}
	}
	ch[i] = '\0';
	printf("\n\n");

	for (i = 0; ch[i] != '\0'; i++) {
		putch(ch[i]);
	}
}*/