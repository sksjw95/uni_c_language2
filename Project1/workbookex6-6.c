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
	// ���������� *p �� null�� ����Ű�� �ݺ����� ����
	printf("Inverse String: ");
	while (i < len) {
		p--;
		putchar(*p);
		i++;
	}
	// null �ٷ� �� ���ڰ� ��µǰ� �ϳ��� �������� ����� �˴ϴ�.
	putchar('\n');
	getch();
}*/