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
		printf("이름을 입력하세요.: ");
		scanf("%s", &score[i].name);
		printf("국어?: ");
		scanf("%d", &score[i].kor);
		printf("영어?: ");
		scanf("%d", &score[i].eng);
		printf("수학?: ");
		scanf("%d", &score[i].math);
		score[i].total = score[i].kor + score[i].eng + score[i].math;
		score[i].ave = (float)score[i].total / 3;
		printf("이름: %s, 국어: %d, 영어: %d, 수학: %d\n", score[i].name, score[i].kor, score[i].eng, score[i].math);
		printf("총점: %d, 평균: %f\n", score[i].total, score[i].ave);
	}
}*/