/*#include<stdio.h>
#include<stdlib.h>
void main() {
	int* intptr;
	float* floatptr;
	char* name;

	intptr = (int*)malloc(sizeof(int));
	floatptr = (float*)malloc(sizeof(float));
	name = (char*)malloc(sizeof(char));

	*intptr = 25;
	*floatptr = 3.141592;
	printf("이름은? ");
	gets(name);
	printf("저장된 값:\n");
	printf("\t *inptr=%d\n", *intptr);
	printf("\t *floatptr=%f\n", *floatptr);
	printf("\t name=%s\n", name);
	free(intptr);
	free(floatptr);
	free(name);

}*/