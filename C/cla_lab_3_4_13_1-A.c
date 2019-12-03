#include <stdio.h>

int main()
{
	int n1, n2;
	while( n2 != 0 )
	{
	    scanf(" %d %d ", &n1, &n2 );
	    printf(" Sum: %d\n ", n1 + n2);
	}
	if ( n1 == 99 )
	    printf(" Finish.\n ");
	return 0;
}