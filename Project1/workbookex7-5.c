/*#include<stdio.h>
struct student {
	char* name;
	char* no;
	int score;
};

void main() {
	struct student* ptr, a[5] = { {"KIM, H G","07011",90},{"HONG, G D","07022",84},{"PARK, C S","07033",80},{"LEE, C H","07044",78},{"CHOI, S H","07055",95} };

	int i;
	ptr = a + 4;
	for (i = 0; i < 5; i++, ptr--) {
		printf("\n%12s %3s %6d", (*ptr).name, (*ptr).no, (*ptr).score);
	}
}*/