#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//6-1함수 실습 1
int get_int() {
	int tmp;
	printf("정수를 입력하시오. : ");
	scanf("%d'", &tmp);
	return tmp;
}

int sum(int x, int y) {
	return x + y;
}

int functionexam1() {
	int x = get_int(), y = get_int();
	printf("두수의 합은 : %d", sum(x, y));
}

//6-2 함수 실습 2
double get_double() {
	double tmp;
	printf("정수를 입력하시오. : ");
	scanf("%lf'", &tmp);
	return tmp;
}

double sum(double x, double y) {
	return x + y;
}

void print() {
	double x = get_double(), y = get_double();
	printf("두수의 합은 : %.6lf", sum(x, y));
}

int functionexam2() {
	print();
}
//5-3 exam3
int input() {
	unsigned int n;
	printf("알고싶은 팩토리얼의 값은 ? ");
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
	printf("입력 칸 : ");
	scanf("%lf", &x);
	return x;
}

void menu() {
	printf("\'c\'섭씨온도에서 화씨온도로 변환\n");
	printf("\'f\'화씨온도에서 섭씨온도로 변환\n");
	printf("\'q\' 종료\n");
	printf("메뉴에서 선택하세요.");
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

	printf("정수 입력 : ");
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
//5-6 제곱
int input() {
	int n;
	printf("구하고자 하는 제곱근의 밑수와 n제곱하고 싶은 n을 입력하세요 : ");
	scanf("%d", &n);
	if (n < 1) n = input();
	return n;
}

int pow() {
	while (1) {
		int n = input(), i = 1;
		while (i <= n) {
			printf("2의 %d 제곱 = %.0lf\n", i, pow(2, i));
			i++;
		}
	}
}

//5-7하향감소식 별찍기
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

//5-9 6*6숫자
void banbock2() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}

//5-10 모래시계
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
	printf(check_alpha(a) ? "소문자 알파벳" : "잘못된 문자");
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
	printf("정수 입력 2개 : ");
	scanf("%d %d", &a, &b);
	printf("add : %d \nMax : %d\nMin : %d", add(a, b), mx(a, b), mi(a, b));
}