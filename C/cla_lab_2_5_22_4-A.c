#include <stdio.h>

int main()
{
	int day;
	scanf("%d", &day);
	if (day == 0)
	    printf("The day of week is: Sunday\n");
	else if (day == 1)
	    printf("The day of week is: Monday\n");
	else if (day == 2)
	    printf("The day of week is: Tuesday\n");
	else if (day == 3)
	    printf("The day of week is: Wednesday\n");
	else if (day == 4)
	    printf("The day of week is: Thursday\n");
	else if (day == 5)
	    printf("The day of week is: Friday\n");
	else if (day == 6)
	    printf("The day of week is: Saturday\n");
	else
	    printf("There is no such day: %d. Input value must be from 0 to 6.\n", day);
	return 0;
}