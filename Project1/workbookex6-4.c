/*#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	static int data[100];
	int i, j, N;
	printf("�Է��� �������� ������ �Է��Ͻÿ� : ");
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &data[i]);
	}
	for (i = 0; i < N-1; i++) {
		for (j = i + 1; j < N ; j++) {
			if (data[i] > data[j]) {
				data[i] ^= data[j];
				data[j] ^= data[i];
				data[i] ^= data[j];
			}
		}
	}
	printf("���ĵ� ������ : \n");
	for (i = 0; i <= N - 1; i++) {
		printf("%10d", data[i]);
		if ((i + 1) % 7 == 0) {
			printf("\n");
		}
	}
}*/