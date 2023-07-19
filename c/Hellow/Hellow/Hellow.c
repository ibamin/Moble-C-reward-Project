#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#define size 5

int mfain() {
	int i;
	char dic[size][2][30] = {
		{"book","책"},{"boy","소년"},
		{"computer","컴퓨터"},{"lanuguage","언어"},
		{"rain","비"}
	};
	char word[30];

	printf("단어를 입력하시오:");
	scanf("%s", &word);

	for (i = 0; i < size; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s: %s\n", word, dic[i][1]);
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다.\n");
	return 0;
}
