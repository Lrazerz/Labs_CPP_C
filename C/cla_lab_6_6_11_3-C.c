#include <stdio.h>
#include <stdlib.h>

int Is_array_equal(int n, int matA[][3], int matB[][3]);
void Print_equal(int n, int matA[][3], int matB[][3]);

int main()
{
	int matA[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
	int matB[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int matC[3][3] = { {5,6,3},{4,5,1},{7,1,3} };
	int matD[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	

	Print_equal(3, matC, matB);
	Print_equal(3, matA, matB);
	Print_equal(3, matB, matA);
	Print_equal(3, matB, matC);
	Print_equal(3, matA, matC);
	Print_equal(3, matC, matA);
	Print_equal(3, matB, matD);

	return 0;
}

int Is_array_equal(int n, int matA[][3], int matB[][3])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matA[i][j] > matB[i][j])
				return 1;
			if (matA[i][j] < matB[i][j])
				return -1;
		}
	}
	return 0;
}

void Print_equal(int n, int matA[][n], int matB[][n])
{
	int result = Is_array_equal(n, matA, matB);
	if (result == 0)
		printf("Both matrices are equal\n");
	else if (result == 1)
		printf("matrixA is greater than matrixB\n");
	else if (result == -1)
		printf("matrixA is smaller than matrixB\n");
}