/*#include<stdio.h>
#pragma warning (disable:4996)
struct student {
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	float ave;

};

void main() {
	struct student score[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("�̸��� �Է��ϼ���.: ");
		scanf("%s", &score[i].name);
		printf("����?: ");
		scanf("%d", &score[i].kor);
		printf("����?: ");
		scanf("%d", &score[i].eng);
		printf("����?: ");
		scanf("%d", &score[i].math);
		score[i].total = score[i].kor + score[i].eng + score[i].math;
		score[i].ave = (float)score[i].total / 3;
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", score[i].name, score[i].kor, score[i].eng, score[i].math);
		printf("����: %d, ���: %f\n", score[i].total, score[i].ave);
	}
}*/