#include <stdio.h>

int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("Value A: %.1f\n", a);
	printf("Value B: %.1f\n", b);
	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	return 0;
}