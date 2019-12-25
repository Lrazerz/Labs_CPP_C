#include <iostream>

using namespace std;

int main(void) {

	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year < 1582) {
		cout << "Enter a year greater then 1581";
		return;
	}

	string kindOfYear = "";

	if (year % 4 != 0) kindOfYear = "Common year";
	else if (year % 100 != 0) kindOfYear = "Leap year";
	else if (year % 400 != 0) kindOfYear = "Common year";
	else kindOfYear = "Leap year";

	cout << kindOfYear;
}