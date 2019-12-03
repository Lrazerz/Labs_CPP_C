#include <iostream>

using namespace std;

int main(void)
{
	int n;
	unsigned long long f = 1;
	
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
		f *= i;
		
	cout << f << endl;
	
}