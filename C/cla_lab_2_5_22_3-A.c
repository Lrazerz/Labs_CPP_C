#include <stdio.h>

int main()
{
	int day, month, yearDay;
	scanf("%d %d", &day, &month);
	yearDay = day;
	if (month > 1)
	    yearDay += 31;
	if (month > 2)
	    yearDay += 29;
	if (month > 3)
	    yearDay += 31;
	if (month > 4)
	    yearDay += 30;
	if (month > 5)
	    yearDay += 31;
	if (month > 6)
	    yearDay += 30;
	if (month > 7)
	    yearDay += 31;
	if (month > 8)
	    yearDay += 31;
	if (month > 9)
	    yearDay += 30;
	if (month > 10)
	    yearDay += 31;
	if (month > 11)
	    yearDay += 30;
	printf("The day of the year: %d\n", yearDay);
	return 0;
}