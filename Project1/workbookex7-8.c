/*#include<stdio.h>
#define WON 0
#define DOLLAR 1
#define N 2

union monetary {
	int won;
	float dollar;
};

struct product {
	char* name;
	int ptype;
	union monetary price;
};

void main() {
	int j;
	struct product item[N];
	item[0].name = "USB";
	item[0].price.won = 30000;
	item[0].ptype = WON;
	item[1].name = "CAMERA";
	item[1].price.dollar = 800.85;
	item[1].ptype = DOLLAR;

	for (j = 0; j < N; j++) {
		printf("ǰ��: %-10s ", item[j].name);
		if (item[j].ptype) {
			printf("����: %.2f\n", item[j].price.dollar);
		}
		else {
			printf("����: %d�� \n", item[j].price.won);
		}

	}
}*/