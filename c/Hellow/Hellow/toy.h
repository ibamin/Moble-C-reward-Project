#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int check(int arr[], int start, int end, int r) {
	for (int j = start; j < end; j++) {
		if (arr[j] == r) {
			return 1;
		}
	}
	return 0;
}

int rolldice() {
	srand(time(NULL));
	return rand() % 45+1;
}

void play() {
	int arr[6] = { 0, };
	int r;
	int i = 0, tf;

	while (1) {
		tf = 0;
		if (i == 6) break;

		r = rolldice();
		if (!check(arr, 0, i, r)) {
			arr[i] = r;
			i++;
		}
	}
	for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
}

//사분면 출력
#define Max_Board 101
char board[101][101];
void board_init() {
	for (int i = 0; i < Max_Board; i++) {
		for (int j = 0; j < Max_Board; j++) {
			board[i][j] = 'o';
		}
	}
}
void paint(int x, int y) {
	board_init();
	for (int i = 0; i < Max_Board; i++) board[50][i] = '|';
	for (int j = 0; j < Max_Board; j++) board[j][50] = '-';

	board[50 + x][50 - y] = 'X';
}
void graf() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x < 0 && y>0) printf("2사분면\n");
	else if (x < 0 && y < 0) printf("3사분면\n");
	else if (x > 0 && y < 0) printf("4사분면\n");
	else if (x > 0 && y > 0) printf("1사분면\n");
	else printf("원점");

	paint(x, y);
	for (int i = 0; i < Max_Board; i++) {
		for (int j = 0; j < Max_Board; j++) {
			if (board[j][i] == 'o') printf(" ");
			else printf("%c", board[j][i]);
		}
		printf("\n");
	}
}