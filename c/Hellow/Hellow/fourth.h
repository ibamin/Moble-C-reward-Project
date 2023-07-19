#include <stdio.h>
#define spm 60

void fourthmain() {
	//4-1 연산자 사용
	int x, y, result;
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d+%d=%d\n", x, y, result);

	result = x - y;
	printf("%d-%d=%d\n", x, y, result);
	result = x * y;
	printf("%d*%d=%d\n", x, y, result);
	result = x / y;
	printf("%d/%d=%d\n", x, y, result);
	result = x % y;
	printf("%d%%%d=%d\n", x, y, result);

	//4-2 나머지 연산자
	int in, m, s;
	scanf("%d", &in);

	m = in / spm;
	s = in % spm;

	printf("%d 초는 %d분 %d초입니다", in, m, s);
}

//4-3복합 대입 연산자
void bockhab() {
	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("x= %d y= %d z=%d ", x, y, z);
}


//4-4관계 연산
void Relation_Operater() {
	int x, y;

	scanf("%d %d", &x, &y);

	printf("x==y의 결과값 : %d\n", x == y);
	printf("x!=y의 결과값 : %d\n", x != y);
	printf("x>y의 결과값 : %d\n", x > y);
	printf("x<의 결과값 : %d\n", x < y);
	printf("x>=y의 결과값 : %d\n", x >= y);
	printf("x<=y의 결과값 : %d\n", x <= y);
}

//4-5논리 연산
void Logical_Operator() {
	int x, y;

	scanf("%d %d", &x, &y);


	printf("%d && %d의 결과값 : %d\n", x, y, x && y);
	printf("%d || %d의 결과값 : %d\n", x, y, x || y);
	printf("!%d의 결과값 : %d", x, !x);
}

//4-6 윤년
void yoon_year() {
	int  y;
	scanf("%d", &y);

	printf("%d년은 %d입니다", y, ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)));
}

//4-7 3항 연산자
void Three_term_operator() {
	int x, y;
	scanf("%d %d", &x, &y);

	printf("큰수 =%d\n", x > y ? x : y);
	printf("작은수 =%d\n", x < y ? x : y);
}

//4-8 조건연산자
void Condition_Operators() {
	bool tf = true;
	printf("%d\n", true + 1);
	printf("%d\n", tf + 1);
	printf("%s\n", tf ? "true" : "false");
}

//4-9 이진수 표현
void print_binary() {
	unsigned int n;
	scanf("%u", &n);

	int x = 1;
	x = x << 7;
	printf("이진수 :");

	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
	((n & x) == 0) ? printf("0") : printf("1");
	x = x >> 1;
}

//4-10 우선순위
void Priority() {
	int x = 0, y = 0;
	int result;
	result = 2 > 3 || 6 > 7;
	printf("%d\n", result); //0

	result = 2 || 3 && 3 > 2;
	printf("%d\n", result); //1

	result = x = y = 1;
	printf("%d\n", result); //1

	result = -++x + y--;
	printf("%d", result); //-1
}

//4-11 Test1
void Test1() {
	int a, b;
	scanf("%d %d", &a, &b);
	a > b ? printf("%d", a - b) : printf("%d", b - a);
}


//4-12 Test2
int check() {
	char a;
	scanf("%c", &a);
	return ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u')) ?  1 : 0;
}
void Test2() {
	char a;
	int cnt = 0;
	
	cnt += check();
	cnt += check();
	cnt += check();
	cnt += check();
	cnt += check();
	cnt += check();
	printf("모음 : %d 자음 : %d", cnt, 6 - cnt);
}