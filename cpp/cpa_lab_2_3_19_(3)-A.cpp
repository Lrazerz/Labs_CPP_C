#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long ppw = 1;
	int n;
	
	cin >> n;
	if (n < 0 || 64 <= n)
	{
		cout << "Try to type less number" << endl;
		return 0;
	}
	
	for (int i = 0; i < n; ++i)
		ppw = ppw * 2;
	cout << p << endl;
	
}
