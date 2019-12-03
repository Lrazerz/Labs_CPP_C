#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "triangle.h"

#define BEFORE_FUNCTION(name) printf("In line %d, file %s,\
 before the "#name" function\n", __LINE__, __FILE__);

int main(int argc, char* argv[])
{
	int n;
	scanf("%d", &n);
	BEFORE_FUNCTION(printTriangle);
	printTriangle(n);
	BEFORE_FUNCTION(printFloydTriangle);
	printFloydTriangle(n);
	return 0;
}