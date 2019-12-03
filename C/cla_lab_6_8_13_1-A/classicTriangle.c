#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printTriangle(int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j <= i; ++j)
			printf("\\");
		printf("\n");
	}
}