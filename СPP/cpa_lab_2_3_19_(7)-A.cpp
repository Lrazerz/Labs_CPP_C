#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long n, pr = 0, cur = 1, tmp;
	
	cin >> n;
	
	for (int i = 1; i < n; ++i)
	{
		tmp = cur + pr;
		pr = cur;
		cur = tmp;
	}
	
	cout << cur << endl;
}
