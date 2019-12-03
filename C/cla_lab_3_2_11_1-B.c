#include <stdio.h>

int main()
{
	unsigned long int ip = 0, octet1, octet2, octet3, octet4;
	scanf(" %lu %lu %lu %lu ", &octet1, &octet2, &octet3, &octet4);
	if (!(0 <= octet1 && octet1 <= 255) ||
	    !(0 <= octet2 && octet2 <= 255) ||
	    !(0 <= octet3 && octet3 <= 255) ||
	    !(0 <= octet4 && octet4 <= 255))
	    printf(" Incorrect IP Address.\n ");
	else
	{
    	ip = octet1;
    	ip = ip * 256 + octet2;
    	ip = ip * 256 + octet3;
    	ip = ip * 256 + octet4;
    	printf(" Human-readable IP address is: %lu.%lu.%lu.%lu\n ", octet1, octet2, octet3, octet4 );
    	printf(" IP address as a 32-bit number: %lu\n ", ip );
	}
	return 0;
}