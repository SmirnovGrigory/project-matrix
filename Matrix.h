#ifndef MATRIX_H
#define MATRIX_H

typedef struct matrix
{
	int n;
	int m;

	int** mas;

}MATRIX;


MATRIX CreateRandomMatrix(int LeftBorder, int RightBorder, int n, int m );
bool MultiplicationCheck(MATRIX a, MATRIX b);
void PrintMatrix(MATRIX m);
MATRIX Summation(MATRIX a, MATRIX b);
MATRIX Subtraction(MATRIX a, MATRIX b);
MATRIX SetMemory(int N, int M);
void FreeMemory(MATRIX math);
MATRIX Transposion(MATRIX matr);

MATRIX NaiveMultiplication(MATRIX matr1, MATRIX matr2);

MATRIX SimpleDnCMultiplication(MATRIX a, MATRIX b);

MATRIX StrassenMultiplication(MATRIX a, MATRIX b );

void SuperTest();
#endif MATRIX_H