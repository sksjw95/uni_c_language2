/*#include<stdio.h>
#include<string.h>
unsigned fibonacci();
void main() {
	int k;
	printf(" k | fibonacci \n");
	printf("****************\n");
	for (k = 1; k <= 10; k++) {
		printf("%2d | %6u\n", k, fibonacci());
	}
}





unsigned fibonacci() {
	static unsigned f = 0, pre_f = 1;
	unsigned re;
	re = f;
	f += pre_f;
	pre_f = re;
	return re;
}*/