#include <iostream>

using namespace std;

int main(void)
{
	int number, steps(0);
	cin >> number;
	while (number != 1)
	{
		if (number % 2)
			number = number * 3 + 1;
		else
			number /= 2;
		cout << number << ' ';
		++steps;
	}
	cout << "steps = " << steps << endl;
	return 0;
}
