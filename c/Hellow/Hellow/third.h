
#include <stdio.h>
#include <limits.h> //�� �ڷ����� ���� Max���� �����ϰ� �ִ� ���
#include <math.h>
#define sum (a+b+c) // exam1
#define triangle x*y/2 //exam2
#define PI 3.141592

int thirdmain() {
	//3-1
	double radius, area;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("���� ���� : %lf\n", area);
	
	//3-2 ���� ��� �ڸ�����
	int a = 12345;

	printf("(1) value=%d\n", a);
	printf("(2) value=%3d\n", a);
	printf("(3) value=%8d\n", a);
	printf("(4) value=%08d\n", a);

	//3-3 �Ǽ� ��� �ڸ�����
	float b = 136.578900;

	printf("(1) value=%f\n", b);
	printf("(2) value=%2.3f\n", b);
	printf("(3) value=%012.2f\n", b);

	//3-4 ���� ��� ǥ��
	printf("10����=%d\n", a);
	printf("8����=%o\n", a);
	printf("16����=%x\n", a);

	//3-5 �� �ڷ����� ũ�� ǥ��
	int x;
	printf("������ ũ�� : %d\n", sizeof(x));
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("short�� ũ�� : % d\n", sizeof(short));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("long long�� ũ�� : %d\n", sizeof(long long));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("double�� ũ�� : %d\n", sizeof(double));
	
	//3-6 unsigned �ǽ�
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;
	printf("s_money = %d\n", s_money);
	printf("u_money = %d\n", u_money);

	s_money += 2;
	printf("s_money = %d\n", s_money);

	u_money += 2;
	printf("u_money = %d", u_money);
	return 0;
}

//3-7 Test1
void exam1() {
	double a, b, c;

	printf("�Ǽ� 3���� �Է����ּ���. : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("������ �� : %.3lf \n������ ���:%.3lf", sum, sum / 3);
}

//3-8 Test2
void exam2() {
	double x, y;
	printf("�ﰢ���� ���̿� �غ��� �Է����ּ��� : ");
	scanf("%lf %lf", &x, &y);
	printf("�ﰢ���� ���� : %.2lf", triangle);
}

//3-9 Test3
void exam3() {
	double x;
	printf("�Ǽ� X : ");
	scanf("%lf", &x);
	printf("Result : %.2lf", 3 * pow(x, 2) + 7 * x + 11);
}