#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//5-1 ���ǹ� Test
int myif() {
	int num;

	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
}

//5-2 �б� �߻�
int myifelse() {
	int n1, n2, n3;

	printf("������ �Է��Ͻÿ�.");
	scanf("%d %d", &n1, &n2);

	if (n2 == 0) printf("0���� ���� �� �����ϴ�.");
	else {
		n3 = n1 / n2;
		printf("Rsult : %d", n3);
	}
}
//5-3 �������� �б� �߻�
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
	if (a >= 65 && a <= 90) printf("�빮�� A~Z");
	else if (a >= 97 && a <= 122) printf("�ҹ��� a~z");
	else if (a >= 48 && a <= (48 + 9)) printf("������ ���� 0~9");
	else printf("��Ÿ����");
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
	printf("-----------���� ���� �� ����----------------\n");
	printf("0.���� 1.���� 2.��\n�Է� ĭ :");
	scanf("%d", &input);
	input %= 3;
	if (computer == (input + 1) % 3) printf("Computer Win");
	if (input == (computer + 1) % 3) printf("User win");
	if (computer == input) printf("Draw");
}

//5-6 Test2
void Test2() {
	int age, height;
	printf("-----------�ѷ��ڽ��� ChcK----------------\n");
	printf("���� :");
	scanf("%d", &age);
	printf("Ű :");
	scanf("%d", &height);
	if (age >= 10 && height >= 140) printf("PASS");
	else printf("SORRY");
}

//5-7 �ݺ���
void recycle() {
	int n, i = 1;

	printf("��� �� : ");
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
	printf("1���� 100������ ������ ��=%d %d\n", sum, result);
}

int recycle3() {
	int n, j;
	printf("2�� n�����ϰ� ���� n�� �Է��Ͻÿ�");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("2�� %d ���� = %.0lf\n", i, pow(2, i));
	}
}

//5-8 �����
int star1() {
	int n, j;
	printf("2�� n�����ϰ� ���� n�� �Է��Ͻÿ�");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("2�� %d ���� = %.0lf\n", i, pow(2, i));
	}
}


//5-9���� �ݺ�
int unlimite() {
	char c;
	while (1) {
		printf("�ҹ��ڸ� �Է��Ͻÿ� : ");
		scanf(" %c", &c);

		if (c == 'Q') break;
		if (c < 'a' || c>'z') continue;

		c -= 32;
		printf("��ȯ�� �빮�� %c\n", c);
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
		if (answer == x + y) printf("�����Դϴ�\n");
		else printf("�����Դϴ�.\n");
	}
}