#include<iostream>
using namespace std;
struct Date 
{
	int year;
	int month;
	int day;
};
bool isLeap(int year)
{
	if (year % 4 != 0)
	{
		return false;
	}
	else if (year % 100 != 0)
	{
		return true;
	}
	else if (year % 400 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int monthLength(int year, int month)
{
	if (isLeap(year) && month == 2)
	{
		return 29;
	}
	else if (month == 2)
	{
		return 28;
	}
	if (month & 2 != 0 && month <= 7)
	{
		return 31;
	}
	else if (month > 7 && month % 2 == 0)
	{
		return 31;
	}
	else { return 30; }
}
int dayOfYear(Date date)
{
	int number = 0;
	int entermonth = date.month;
	int n = 1;
	while (n < entermonth)
	{
		number += monthLength(date.year, date.month);
		if ((date.month) > 1)
		{
			date.month--;
		}
		n++;
	}
	number += date.day;
	return number;

}
int daysBetween(Date d1, Date d2)
{
	if (d1.year > d2.year) { return -1; }
	if(d1.year==d2.year)
	{
		if (d1.month > d2.month) { return -1; }
	}
	if (d1.year == d2.year && d1.month == d2.month)
	{
		if (d1.day > d2.day) { return -1; }
	}
	int number = 0;
	for (; d1.year < d2.year;)
	{
		if (isLeap(d1.year))
		{
			number += 366;
		}
		else { number += 365; }
		d1.year++;

	}
	while (d2.month > d1.month)
	{
		number += monthLength(d1.year, d1.month);
		d1.month++;
	}
	while(d2.month<d1.month)
	{
		number -= monthLength(d1.year, d1.month);
		d1.month--;
	}
	number += d2.day - d1.day;
	return number;
}
int main(void)
{
	Date since,till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since,till) << endl;
	return 0;
}