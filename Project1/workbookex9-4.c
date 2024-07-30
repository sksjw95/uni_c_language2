/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)
void main() {
	int maxlen, len, i;
	char* str;
	printf("input length of max string: ");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc(sizeof(char) * (maxlen + 1));
	printf("string input: ");
	fgets(str, maxlen + 1, stdin);
	len = strlen(str);
	for (i = len; i >= 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i + 1]);

			str[i] = '\0';
		}
	}
	printf("%s", str);
	free(str);
}*/