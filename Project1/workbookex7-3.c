/*#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

struct s_type {
	char name[40];
	char phone[14];
	int hours;
	int wage;
}emp[10];

void main() {
	int i;
	char temp[80];
	for (i = 0; i < 10; i++) {
		printf("Enter name");
		gets(emp[i].name);
		printf("Enter telephone number: ");
		gets(emp[i].phone);
		printf("Enter hours worked: ");
		gets(temp);
		emp[i].hours = atoi(temp);
		printf("Enter hourly wage:");
		gets(temp);
		emp[i].wage = atof(temp);
		printf("name = %s, phone = %s, hour=%d, wage = %d\n", emp[i].name, emp[i].phone, emp[i].hours, emp[i].wage);
	}
}*/