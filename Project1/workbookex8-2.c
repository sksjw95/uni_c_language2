/*#include<stdio.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char buff[100];

	fp = fopen("C:/Users/tjwld/OneDrive/바탕 화면/방통대/1학년1학기/C/sample1", "r");

	if (fp != NULL) {
		while (!feof(fp)) {
			fgets(buff, 100, fp);
			if (feof(fp)) {
				break;
			   }
			printf(buff);
		}
		fclose(fp);
	}

}*/