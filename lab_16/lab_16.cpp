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
		printf_s("Enter elements of the matrix 3*4\n");
		for (int a = 0; a < 3; a++) {
			for (int b = 0; b < 4; b++) {
				printf_s("array[%d][%d]: ", a, b);
				scanf_s("%d", &arrayA[a][b]);
			}
		}

		printf_s("Enter elements of the matrix 4*3\n");
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
		int matrix[MAX_SIZE][MAX_SIZE], n, max;
		printf_s("Enter size of the square matrix n*n (not more than 10)\n");
		scanf_s("%d", &n);
		if (n <= 10) {
				printf_s("Enter the elements of the matrix (%dx%d):\n", n, n);
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						printf_s("matrix[%d][%d]: ", i, j);
						scanf_s("%d", &matrix[i][j]);
					}
				}
				printf_s("Max in each row:\n");
				for (int i = 0; i < n; i++) {
					max = matrix[i][0];

					for (int j = 1; j < n; j++) {
						if (matrix[i][j] > max) {
							max = matrix[i][j];
						}
					}

					printf_s("Row %d: %d\n", i + 1, max);
				}
			}
		else {
			printf_s("Wrong size of the matrix\n");
		}
	}
		  break;
	case 3: {
		int f[4] = {0}, s[4][3],  sum = 0;
		printf_s("Enter the elements of the matrix 4*3:)\n");
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3;j++) {
				printf_s("s[%d][%d]: ", i, j);
				scanf_s("%d", &s[i][j]);
			}
		}
		printf_s("Form an array f\n");
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (s[i][j] > 0) {
					sum += s[i][j];
				}
			}
			f[i] = sum;
			sum = 0;
		}
		printf_s("array f:\n");
		for (int i = 0; i < 4; i++) {
			printf_s("f[%d] = %d\n", i, f[i]);
		}
	}
		  break;
	case 4: {
		int array[MAX_SIZE][MAX_SIZE], n, m;
		printf_s("Enter size of the matrix m*n (not more than %d)\n", MAX_SIZE);
		scanf_s("%d%d", &n, &m);
		if (n <= MAX_SIZE && m <= MAX_SIZE) {
			printf_s("Enter elements of the matrix (%dx%d):\n", n, m);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					printf_s("array[%d][%d]: ", i, j);
					scanf_s("%d", &array[i][j]);
				}
			}
			printf_s("Matrix as snake:\n");
			for (int i = 0; i < n; i++) {
				if (i % 2 == 0) {
					// Вивід рядка зліва направо
					for (int j = 0; j < m; j++) {
						printf_s("%d\t", array[i][j]);
					}
				}
				else {
					// Вивід рядка справа наліво
					for (int j = m - 1; j >= 0; j--) {
						printf_s("%d\t", array[i][j]);
					}
				}
				printf_s("\n");
			}
		}
		else {
			printf_s("Wrong size of the matrix\n");
		}
	}
		  break;
	default:
		printf_s("Wrong number");
	}
		  return 0;
}
