#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define size 5

struct student {
	int number;
	char name[10];
	double grade;
};

void print(struct student s) {
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);
	printf("����ü ������ : %u\n", sizeof(s));
	printf("����ü �й� : %u\n", &s.number);
	printf("����ü �̸� : %u\n", &s.name);
	printf("����ü ���� :%u\n", &s.grade);
}

int main() {
	struct student s[3];

	for (int i = 0; i < 3; i++)
		scanf_s("%d %9s %lf", &s[i].number, &s[i].name,10, &s[i].grade);

	for (int i = 0; i < 3; i++)
		print(s[i]);
}