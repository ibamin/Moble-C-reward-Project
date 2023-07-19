#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//5-1 조건문 Test
int myif() {
	int num;

	printf("정수를 입력하시오.");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("짝수");
	else
		printf("홀수");
}

//5-2 분기 발생
int myifelse() {
	int n1, n2, n3;

	printf("정수를 입력하시오.");
	scanf("%d %d", &n1, &n2);

	if (n2 == 0) printf("0으로 나눌 수 없습니다.");
	else {
		n3 = n1 / n2;
		printf("Rsult : %d", n3);
	}
}
//5-3 연속적인 분기 발생
void print(int score) {
	if (score >= 90) printf("Grade : A");
	else if (score >= 80) printf("Grade : B");
	else if (score >= 70) printf("Grade : C");
	else if (score >= 60) printf("Grade : D");
	else printf("Grade : F");

	if ((score % 10) >= 5)
		printf("+");
	else printf("0");
}
int mymultiifelse1() {
	int score;

	scanf("%d", &score);
	print(score);
}

void print(char a) {
	if (a >= 65 && a <= 90) printf("대문자 A~Z");
	else if (a >= 97 && a <= 122) printf("소문자 a~z");
	else if (a >= 48 && a <= (48 + 9)) printf("문자형 숫자 0~9");
	else printf("기타문자");
}
int mymultiifelse2() {
	char ch;

	scanf("%c", &ch);
	print(ch);
}

int print(int a, char oper, int b) {
	if (oper == '+') return a + b;
	if (oper == '-') return a - b;
	if (oper == '/') return a / b;
	if (oper == '%') return a % b;
	return 0;
}
int mymultiifelse3() {
	char oper;
	int a, b;

	scanf("%d %c %d", &a, &oper, &b);
	printf("= %d", print(a, oper, b));
}


//5-4 switch
int print(int a, char oper, int b) {
	switch (oper) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return a / b;
		break;
	case '%':
		return a % b;
		break;
	default:
		return 0;
	}
}
int myswitch() {
	char oper;
	int a, b;

	scanf("%d %c %d", &a, &oper, &b);
	printf("= %d", print(a, oper, b));
}

//5-5 Test1
int Test() {
	int input, computer = 2;
	printf("-----------가위 바위 보 게임----------------\n");
	printf("0.가위 1.바위 2.보\n입력 칸 :");
	scanf("%d", &input);
	input %= 3;
	if (computer == (input + 1) % 3) printf("Computer Win");
	if (input == (computer + 1) % 3) printf("User win");
	if (computer == input) printf("Draw");
}

//5-6 Test2
void Test2() {
	int age, height;
	printf("-----------롤러코스터 ChcK----------------\n");
	printf("나이 :");
	scanf("%d", &age);
	printf("키 :");
	scanf("%d", &height);
	if (age >= 10 && height >= 140) printf("PASS");
	else printf("SORRY");
}

//5-7 반복문
void recycle() {
	int n, i = 1;

	printf("출력 단 : ");
	scanf("%d", &n);
	while (i < 10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}

int recycle2() {
	int i, sum;
	int n;
	scanf("%d", &n);
	sum = 0;
	for (i = 1; i <= n; i++) sum += i;

	int result = (n % 2 == 0) ? (n + 1) * (n / 2) : (n + 1) * (n / 2) + (n / 2 + 1);
	printf("1부터 100까지의 정수의 합=%d %d\n", sum, result);
}

int recycle3() {
	int n, j;
	printf("2의 n제곱하고 싶은 n을 입력하시오");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("2의 %d 제곱 = %.0lf\n", i, pow(2, i));
	}
}

//5-8 별찍기
int star1() {
	int n, j;
	printf("2의 n제곱하고 싶은 n을 입력하시오");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("2의 %d 제곱 = %.0lf\n", i, pow(2, i));
	}
}


//5-9무한 반복
int unlimite() {
	char c;
	while (1) {
		printf("소문자를 입력하시오 : ");
		scanf(" %c", &c);

		if (c == 'Q') break;
		if (c < 'a' || c>'z') continue;

		c -= 32;
		printf("변환된 대문자 %c\n", c);
	}
}

//5-10
int random() {
	int x, y, answer;
	//srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (answer == x + y) printf("정답입니다\n");
		else printf("오답입니다.\n");
	}
}