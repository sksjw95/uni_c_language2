/*#include<stdio.h>
void main() {
	unsigned char* p = "Computer science ��ǻ�Ͱ��а�";
	unsigned char buff[20] = { 0, };
	int i = 0;
	while (*p) {
		if (*p > 127) {
			buff[i++] = *p;
		}
		p++;
	}
	puts(buff);
}*/