#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFloydTriangle(int size)
{
	for (int i = 0, cur = 1; i < size; ++i)
	{
		for (int j = 0; j <= i; ++j)
			printf("%3d ", cur++);
		printf("\n");
	}
}