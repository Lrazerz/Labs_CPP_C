

#include <iostream>
using namespace std;
int main(void)
{
	int i = 8888888;
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int* minimum=&i;
	int* ptr = vector;
	for (int i = 0;i < n;i++)
	{
		
		if (*(ptr+i) < *minimum)
		{
			*minimum = *(ptr + i);
		}

	}cout << *minimum;
	return 0;
}