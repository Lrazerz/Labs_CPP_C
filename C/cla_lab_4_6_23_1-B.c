#include <stdio.h>

int main(void)
{
		char c, *pc;
		short s;
		int i, *pi;
		long l;
		long long ll;
		float f;
		double d;
		printf("This computing environment uses:\n");
		printf("%lu byte for chars\n", sizeof(char));
		printf("%lu byte for char variables\n", sizeof c);
		printf("%lu bytes for shorts\n", sizeof(short int));
		printf("%lu byte for short variables\n", sizeof s);
		printf("%lu bytes for ints\n", sizeof(int));
		printf("%lu byte for int variables\n", sizeof i);
		printf("%lu bytes for longs\n", sizeof(long int));
		printf("%lu byte for long variables\n", sizeof l);
		printf("%lu bytes for long longs\n", sizeof(long long int));
		printf("%lu byte for long long variables\n", sizeof ll);
		printf("%lu bytes for floats\n", sizeof(float));
		printf("%lu byte for float variables\n", sizeof f);
		printf("%lu bytes for doubles\n", sizeof(double));
		printf("%lu byte for double variables\n", sizeof d);
		printf("%lu bytes for pointers\n", sizeof(int *));
		printf("%lu bytes for pointer variables\n", sizeof pi);
		printf("%lu bytes for address of char variable\n", sizeof &c);
		printf("%lu bytes for pointer to char variable\n", sizeof pc);
		printf("%lu byte for value stored by pointer to char variable\n", sizeof *pc);
		return 0;
}