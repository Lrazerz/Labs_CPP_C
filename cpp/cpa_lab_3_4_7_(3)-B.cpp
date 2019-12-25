#include<iostream>
using namespace std;
struct Date {
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
	while(n<entermonth)
	{
		number += monthLength(date.year,date.month);
		if ((date.month)>1)
		{
			date.month--;
		}
		n++;
	}
	number += date.day;
	return number;

}
int main(void)
{
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}