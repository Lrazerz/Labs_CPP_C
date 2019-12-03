#include <stdio.h>

int main()
{
	float num;
	int in;
	scanf("%f", &num);
	in = (int)num;
	if (in == 1)
	    printf("Very bad");
	else if (in == 2)
	    printf("Bad");
	else if (in == 3)
	    printf("Neutral");
	else if (in == 4)
	    printf("Good");
	else if (in == 5)
	    printf("Very good");
	return 0;
}