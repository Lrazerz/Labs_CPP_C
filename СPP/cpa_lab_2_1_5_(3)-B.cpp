#include <iostream>

using namespace std;

int main(void) {
	// 0 - metric 1 imperial   12 inch = 1 ft
	int sys; 

	cout << "From what system do you want to convert? \n 0 - metric \n 1 - imperial";
	cin >> sys;

	if (sys == 0) {

		float m;

		cout << "Enter the amount of meters";

		cin >> m;

		if (m <= 0) {
			cout << "Enter number greater then 0";
			return;
		}

		int ft = m * 3.281;

		float in = (m - ft / 3.281) * 39.37;
		
		cout << ft << "'" << in << "''";
	}

	else if (sys == 1) {

		float ft, in;

		cout << "Enter the amount of ft: ";

		cin >> ft;

		cout << "Enter the amount of in: ";

		cin >> in;


		if (ft < 0 || in < 0) {
			cout << "Enter the numbers greater then 0";
			return;
		}
 
		float m = ft / 3.281;


		float inInMetr = in / 39.37;

		m += inInMetr;

		cout << m << "m";
	}
}