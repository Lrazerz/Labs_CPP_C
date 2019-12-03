#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float varWithPrec1, varWithPrec2, var2WithPrec6, varWithPrec2_2, varWithPrec0;

	cin >> varWithPrec1;
	cin >> varWithPrec2;
	cin >> var2WithPrec6;
	cin >> varWithPrec2_2;
	cin >> varWithPrec0;

	cout << fixed << setprecision(1) << varWithPrec1 << endl << setprecision(2) << varWithPrec2 << endl << setprecision(6) << var2WithPrec6 << endl
		<< setprecision(2) << varWithPrec2_2 << endl << setprecision(0) << varWithPrec0;
}