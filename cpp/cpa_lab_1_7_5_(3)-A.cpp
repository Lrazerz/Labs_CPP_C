#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (a > 255 || a < 1 || b > 255 || b < 1 || c > 255 || c < 1 || d > 255 || d < 1) {
		cout << "Enter only number from 1 to 255";
		return;
	}

	cout << a << "." << b << "." << c << "." << d;
}
