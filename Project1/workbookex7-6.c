/*#include<stdio.h>
struct student {
	char* name;
	char* no;
	int score;
};

void main() {
	struct student temp, a[5] = { {"KIM, H G","07011",90},{"HONG, G D","07022",84},{"PARK, C S","07033",80},{"LEE, C H","07044",78},{"CHOI, S H","07055",95} };

	int i,j;
	printf("\n<정렬 전>   이름   학번   점수\n");
	for (i = 0; i < 5; i++) {
		printf("\n%20s  %3s   %6d", a[i].name, a[i].no, a[i].score);
	}
	for (j = 1; j < 5; j++) {
		for (i = 1; i < 5; i++) {
			if (a[i].score < a[i - 1].score) {
				temp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = temp;
			}
		}
	}
	printf("\n<정렬 후>   이름   학번   점수\n");
	for (i = 0; i < 5; i++) {
		printf("\n%20s  %3s   %6d", a[i].name, a[i].no, a[i].score);
	}
}*/