/*#include<stdio.h>
void main() {
	int A[] = { 76,-59,-34,90,169,-12,13,103,3,29 };
	int i, * p, max = -1000, min = 1000;
	int maxloc, minloc;

	p = &A[0];
	printf("�迭�� ��[]={");
	for (i = 0; i < 10; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
			maxloc = i + 1;
		}
		if (*(p + i) < min) {
			min = *(p + i);
			minloc = i + 1;
		}
		printf(" %d", *(p + i));
	}
	printf("} \n");
	printf("�ִ� ==> %d, ��ġ ==> %d ��°\n", max, maxloc);
	printf("�ּڰ� ==> %d, ��ġ ==> %d ��°\n", min, minloc);
}*/