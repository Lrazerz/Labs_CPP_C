#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_valid_ip(char* ip_str);
int valid_digit(char* ip_p);


int main()

{
	char ip_1[] = "127.0.0.1";
	char ip_2[] = "127.0.01";
	char ip_3[] = "127.0..1";
	char ip_4[] = "127.zero.0.1";
	char ip_5[] = "127.297.0.1 ";
	char ip_6[] = "127.2555.0.1";
	char ip_7[] = "255.255.255.255";
	

	printf("%s", ip_1);
	if (is_valid_ip(ip_1))
	    printf(" is a valid IP address\n");
	else
	    printf(" is not a valid IP address\n");

	printf("%s", ip_2);
	if (is_valid_ip(ip_2)) 
	    printf(" is a valid IP address\n");
	else 
    	printf(" is not a valid IP address\n");

	printf("%s", ip_3);
	if (is_valid_ip(ip_3)) 
	    printf(" is a valid IP address\n");
	else 
	    printf(" is not a valid IP address\n");

	printf("%s", ip_4);
	if (is_valid_ip(ip_4)) 
	    printf(" is a valid IP address\n");
	else 
	    printf(" is not a valid IP address\n");

	printf("%s", ip_5);
	if (is_valid_ip(ip_5)) 
	    printf(" is a valid IP address\n");
	else 
	    printf(" is not a valid IP address\n");

	printf("%s", ip_6);
	if (is_valid_ip(ip_6)) 
	    printf(" is a valid IP address\n");
	else 
	    printf(" is not a valid IP address\n");

	printf("%s", ip_7);
	if (is_valid_ip(ip_7)) 
	    printf(" is a valid IP address\n");
	else 
	    printf(" is not a valid IP address\n");

	return 0;
}

int valid_digit(char* ip_p)
{
	while (*ip_p) 
	{
		if (*ip_p >= '0' && *ip_p <= '9')
			++ip_p;
		else
            return 0;
	}
	return 1;
}

int is_valid_ip(char* ip_str)
{
	char* ptr;
	int num_tmp = 0; 
    int dots = 0;

	if (ip_str == NULL)
	    return 0;
	ptr = strtok(ip_str, ".");

	if (ptr == NULL)
        return 0;
	while (ptr) 
	{
		if (!valid_digit(ptr))
            return 0;
		num_tmp = atoi(ptr);
		if (num_tmp >= 0 && num_tmp <= 255) 
		{
			ptr = strtok(NULL, ".");
			if (ptr != NULL)
				dots++;
		}
		else
            return 0;
	}
	if (dots != 3)
		return 0;
	return 1;
}

