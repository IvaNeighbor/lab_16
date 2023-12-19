#include <stdio.h>
#define MAX_SIZE 100

int main() {
	int number;
	printf_s("Press 1 or 2 or 3 or 4\n");
	printf_s("The program finds the matrix c=a+bt, where bt is the transposed matrix b.\n");
	printf_s("The program finds the largest elements of each row of the matrix.\n");
	printf_s("The program forms a vector f [4], each element of which is the sum of the positive elements of the corresponding row of the two-dimensional array s[4*5].\n");
	printf_s("The program fills the matrix with the Snake.\n");
	scanf_s("%d", &number);
	switch (number) {
	case 1: {
		int arrayA[3][4], arrayB[4][3], arrayBt[3][4], arrayC[3][4];
		printf_s("Enter elements of matrix 3*4\n");
		for (int a = 0; a < 3; a++) {
			for (int b = 0; b < 4; b++) {
				printf_s("array[%d][%d]: ", a, b);
				scanf_s("%d", &arrayA[a][b]);
			}
		}

		printf_s("Enter elements of matrix 4*3\n");
		for (int c = 0; c < 4; c++) {
			for (int d = 0; d < 3; d++) {
				printf_s("array[%d][%d]: ", c, d);
				scanf_s("%d", &arrayB[c][d]);
			}
		}

		printf_s("Transposed matrix 4*3\n");
		for (int c = 0; c < 3; c++) {
			for (int d = 0; d < 4; d++) {
				arrayBt[c][d] = arrayB[d][c];
				printf("%d ", arrayB[d][c]);
			}
			printf("\n");
		}
		printf_s("Sum matrix 3*4 and 3*4\n");
		for (int c = 0; c < 3; c++) {
			for (int d = 0; d < 4; d++) {
				arrayC[3][4] = arrayA[c][d] + arrayBt[c][d];
				printf("%d ", arrayC[3][4]);
			}
			printf("\n");
		}
	}
		  break;
	case 2: {

	}
	default:
		printf_s("Wrong number");
	}
		  return 0;
}
