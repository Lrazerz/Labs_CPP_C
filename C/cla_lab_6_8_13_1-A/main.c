#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "triangle.h"

int main(int argc, char* argv[])
{
	int n;
	scanf("%d", &n);
	printTriangle(n);
	printFloydTriangle(n);
	return 0;
}