/*#include<stdio.h>
#pragma warning (disable:4996)
#define N 10
void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main() {
	int score[N] = { 0 };
	int j, sum;
	float average;

	input(score, N);
	sum = sum2(score, N);
	average = (float)sum / N;
	printf("��� : %f\n", average);

	sort(score, N);
	printf("������ : ");
	for (j = 0; j < N; j++) {
		printf("%d ", score[j]);
	}
	printf("\n");
}

void input(int scr[], int size) {
	int j;
	for (j = 0; j < size; j++) {
		printf("%d ��° ������ �Է��ϼ���. :", j + 1);
		scanf("%d", &scr[j]);
	}

}

int sum2(int scr[], int size) {
	int sum, j;
	for (sum = 0, j = 0; j < size; j++) {
		sum += scr[j];
	}
	return sum;
}

void sort(int scr[], int size) {
	int j, k, temp;
	for (j = 0; j < size - 1; j++) {
		for (k = size - 1; k > j; k--) {
			if (scr[k - 1] > scr[k]) {
				temp = scr[k - 1];
				scr[k - 1] = scr[k];
				scr[k] = temp;
			}
		}
	}
}*/
