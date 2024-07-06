/*#include<stdio.h>
#include<conio.h>
#include<string.h>
#pragma warning(disable:4996)
void main() {
	char buffer[80], * p = buffer;
	int len, i = 0;
	printf("Input String: ");
	scanf("%s", p);
	len = strlen(p);
	while (*p) {
		p++;
	}
	// 최종적으로 *p 는 null을 가르키고 반복문이 끝남
	printf("Inverse String: ");
	while (i < len) {
		p--;
		putchar(*p);
		i++;
	}
	// null 바로 전 문자가 출력되고 하나씩 역순으로 출력이 됩니다.
	putchar('\n');
	getch();
}*/