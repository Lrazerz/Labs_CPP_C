#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], temp;
	scanf( "%s", str );
	int n = strlen(str);
	for (int i = 0; i < n / 2; ++i)
    {
			temp = str[i];
			str[i] = str[n - 1 - i];
			str[n - 1 - i] = temp;
    }
    printf( "%s\n", str );
	return 0;
}