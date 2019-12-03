#include <stdio.h>

int main()
{
	int day, month, year, daysInFebruary, yearDay;
	scanf("%d %d %d", &day, &month, &year);
	
	if (year % 400 == 0)
		daysInFebruary = 29;
	else if (year % 100 == 0)
		daysInFebruary = 28;
	else if (year % 4 == 0)
		daysInFebruary = 29;
	else
	    daysInFebruary = 28;
	    
	yearDay = day;
	if (month > 1)
	    yearDay += 31;
	if (month > 2)
	    yearDay += daysInFebruary;
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