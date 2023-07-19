
#include <stdio.h>
#include <limits.h> //각 자료형에 대한 Max값을 저장하고 있는 헤더
#include <math.h>
#define sum (a+b+c) // exam1
#define triangle x*y/2 //exam2
#define PI 3.141592

int thirdmain() {
	//3-1
	double radius, area;

	printf("반지름을 입력하시오:");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("원의 면적 : %lf\n", area);
	
	//3-2 정수 출력 자리지정
	int a = 12345;

	printf("(1) value=%d\n", a);
	printf("(2) value=%3d\n", a);
	printf("(3) value=%8d\n", a);
	printf("(4) value=%08d\n", a);

	//3-3 실수 출력 자리지정
	float b = 136.578900;

	printf("(1) value=%f\n", b);
	printf("(2) value=%2.3f\n", b);
	printf("(3) value=%012.2f\n", b);

	//3-4 진수 출력 표현
	printf("10진수=%d\n", a);
	printf("8진수=%o\n", a);
	printf("16진수=%x\n", a);

	//3-5 각 자료형의 크기 표현
	int x;
	printf("변수의 크기 : %d\n", sizeof(x));
	printf("char의 크기 : %d\n", sizeof(char));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("short의 크기 : % d\n", sizeof(short));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("double의 크기 : %d\n", sizeof(double));
	
	//3-6 unsigned 실습
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

	printf("실수 3개를 입력해주세요. : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("세수의 합 : %.3lf \n세수의 평균:%.3lf", sum, sum / 3);
}

//3-8 Test2
void exam2() {
	double x, y;
	printf("삼각형의 높이와 밑변을 입력해주세요 : ");
	scanf("%lf %lf", &x, &y);
	printf("삼각형의 넓이 : %.2lf", triangle);
}

//3-9 Test3
void exam3() {
	double x;
	printf("실수 X : ");
	scanf("%lf", &x);
	printf("Result : %.2lf", 3 * pow(x, 2) + 7 * x + 11);
}