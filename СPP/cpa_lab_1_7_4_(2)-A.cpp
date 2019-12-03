#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float number1,number2;

	cin >> number1;
	cin >> number2;

	float epsilon = 0.000001;

	bool epsilonEqual = (float)number1 > (float)number2 ? (float)number1 - (float)number2 < epsilon : 
		(float)number2 - (float)number1 <= epsilon;

	cout << ( epsilonEqual ? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon)" );
}