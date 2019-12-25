#include <iostream>

using namespace std;

int main(void)
{
	int n, m, k, d;

	cout << "Input pyramid level please: ";
	cin >> n;

	d = 2 * n;
	
	for (int i = 0; i < n; ++i)
	{
		int j = 0, center = 0;
		for (int pyramid = 0; pyramid < 3; ++pyramid)
		{
			center = n - 1 + pyramid * d;
			if (i == 0)
			{
				while (j++ < center)
					cout << ' ';
				cout << '*';
			}
			else if (i == n - 1)
			{
				while (j++ < center + n)
					cout << '*';
				cout << ' '; 
			}
			else
			{
				m = center - i, k = center + i;
				while (j++ < m)
					cout << ' ';
				cout << '*';
				while (j++ < k)
					cout << ' ';
				cout << '*';
			}
		}
		cout << endl;
	}
	return 0;
}
