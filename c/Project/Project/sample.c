#include <stdio.h>

int main() {
	char code1 = 'A';
	char code2 = 65;
	printf("문자 2개 입력:");
	scanf_s("%c%c", &code1,1, &code2,1);

	printf("code1= %c\n", code1);
	printf("code2=%c\n", code2);
}