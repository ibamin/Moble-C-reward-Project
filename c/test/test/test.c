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
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);
	printf("구조체 사이즈 : %u\n", sizeof(s));
	printf("구조체 학번 : %u\n", &s.number);
	printf("구조체 이름 : %u\n", &s.name);
	printf("구조체 학점 :%u\n", &s.grade);
}

int main() {
	struct student s[3];

	for (int i = 0; i < 3; i++)
		scanf_s("%d %9s %lf", &s[i].number, &s[i].name,10, &s[i].grade);

	for (int i = 0; i < 3; i++)
		print(s[i]);
}