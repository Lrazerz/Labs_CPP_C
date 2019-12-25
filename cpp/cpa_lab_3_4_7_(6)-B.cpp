#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num)
{
	bool check =true;
	int stop = sqrt(num);
	if (num == 0 || num==1)return false;
	for (int i = 2; i <= stop;i++)
	{
		
		 if (num % i == 0)
		{
			 check= false;
			 break;
		}
		else { check= true; }
		
	}
	return check;
}
int main(void)
{
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))cout << i << " ";
	cout << endl;
	return 0;
}