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
		{"book","å"},{"boy","�ҳ�"},
		{"computer","��ǻ��"},{"lanuguage","���"},
		{"rain","��"}
	};
	char word[30];

	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", &word);

	for (i = 0; i < size; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s: %s\n", word, dic[i][1]);
			return 0;
		}
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	return 0;
}
