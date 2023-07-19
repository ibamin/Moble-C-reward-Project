#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//6-1�Լ� �ǽ� 1
int get_int() {
	int tmp;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d'", &tmp);
	return tmp;
}

int sum(int x, int y) {
	return x + y;
}

int functionexam1() {
	int x = get_int(), y = get_int();
	printf("�μ��� ���� : %d", sum(x, y));
}

//6-2 �Լ� �ǽ� 2
double get_double() {
	double tmp;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%lf'", &tmp);
	return tmp;
}

double sum(double x, double y) {
	return x + y;
}

void print() {
	double x = get_double(), y = get_double();
	printf("�μ��� ���� : %.6lf", sum(x, y));
}

int functionexam2() {
	print();
}
//5-3 exam3
int input() {
	unsigned int n;
	printf("�˰���� ���丮���� ���� ? ");
	scanf("%u", &n);
	return n;
}

int fac(int n) {
	if (n == 1) return 1;
	return n * fac(n - 1);
}

int factorial() {
	unsigned int n = input();
	printf("%u", fac(n));
}


//5-4 F->C C->F
double ctof(double x) {
	return x * 1.8 + 32;
}

double ftoc(double x) {
	return (x - 32) / 1.8;
}

double get_double() {
	double x;
	printf("�Է� ĭ : ");
	scanf("%lf", &x);
	return x;
}

void menu() {
	printf("\'c\'�����µ����� ȭ���µ��� ��ȯ\n");
	printf("\'f\'ȭ���µ����� �����µ��� ��ȯ\n");
	printf("\'q\' ����\n");
	printf("�޴����� �����ϼ���.");
}

int F_C() {
	char select;
	while (1) {
		menu();
		scanf(" %c", &select);
		if (select == 'q') break;
		double x = get_double();
		if (select == 'f') {
			printf("F : %lf\n", x);
			printf("C : %lf\n", ftoc(x));
		}
		else {
			printf("C : %lf\n", x);
			printf("F : %lf\n", ctof(x));
		}
	}
}

//5-5  combination
int get_int();
int combination(int n, int r);
int fac(int n);
void swap(int* x, int* b) {
	int tmp = *x;
	*x = *b;
	*b = tmp;
}

int combinationmain() {
	int x = get_int(), y = get_int();
	x < y ? swap(&x, &y) : 0;
	printf("C(%d,%d) = %d", x, y, combination(x, y));
}

int get_int() {
	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);
	return n;
}

int fac(int n) {
	if (n == 1) return 1;
	return n * fac(n - 1);
}

int combination(int n, int r) {
	return fac(n) / (fac(r) * fac(n - r));
}
//5-6 ����
int input() {
	int n;
	printf("���ϰ��� �ϴ� �������� �ؼ��� n�����ϰ� ���� n�� �Է��ϼ��� : ");
	scanf("%d", &n);
	if (n < 1) n = input();
	return n;
}

int pow() {
	while (1) {
		int n = input(), i = 1;
		while (i <= n) {
			printf("2�� %d ���� = %.0lf\n", i, pow(2, i));
			i++;
		}
	}
}

//5-7���Ⱘ�ҽ� �����
int bottomstar() {
	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}

//5-8 6*6
void banbock() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

//5-9 6*6����
void banbock2() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

//5-10 �𷡽ð�
void top() {
	int n = 9;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < n; k++) {
			printf("*");
		}
		n -= 2;
		printf("\n");
	}
}

void bottom() {
	int n = 4;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < n; j++) printf(" ");
		for (int k = 0; k < (i * 2) + 1; k++) printf("*");
		n--;
		printf("\n");
	}
}

void moreatime() {
	top(); printf("\n"); bottom();
}

//5-11
double square(double d) {
	return d * d;
}

void testfunction() {
	double n;
	scanf("%lf", &n);
	printf("%lf", square(n));
}

//5-12
int check_alpha(char a) {
	return (a >= 'a' && a <= 'z') ? 1 : 0;
}

void testfunction2() {
	char a;
	scanf("%c", &a);
	printf(check_alpha(a) ? "�ҹ��� ���ĺ�" : "�߸��� ����");
}

//5-13
int add(int x, int y) {
	return x + y;
}

int mx(int x, int y) {
	return x > y ? x : y;
}

int mi(int x, int y) {
	return x < y ? x : y;
}
void testfunction3() {
	int a, b;
	printf("���� �Է� 2�� : ");
	scanf("%d %d", &a, &b);
	printf("add : %d \nMax : %d\nMin : %d", add(a, b), mx(a, b), mi(a, b));
}