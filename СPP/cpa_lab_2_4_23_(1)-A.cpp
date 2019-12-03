#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long n, r(0);
	cin >> n;
	while (n)
		r += (n & 1), n >>= 1;
	cout << r << endl;
}
