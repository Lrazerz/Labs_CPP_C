#include<iostream>
using namespace std;
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
			if (month & 2 != 0 && month<=7)
			{
				return 31;				
			}else if (month > 7 && month % 2 == 0)
			{
				return 31;
			}
			else { return 30; }		
	}
	int main(void)
	{
		for(int yr = 2000; yr < 2002; yr++)
		{
			for(int mo = 1; mo <= 12; mo++)
				cout << monthLength(yr,mo) << " ";cout << endl; 
		}
		return 0;
	}