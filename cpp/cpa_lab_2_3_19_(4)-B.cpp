#include <iostream>

using namespace std;

int main(void)
{
	double m = 1;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
		m /= 2.;

	cout.precision(20);
	cout << m << endl;

	return 0;
}
