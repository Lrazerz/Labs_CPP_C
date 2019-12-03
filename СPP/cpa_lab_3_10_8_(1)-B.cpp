#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(void)
{
	int maxball;
	int ballsno;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));
	int *balls = new int[maxball];    
	for (int i = 0; i < maxball; i++)
	{
	a: balls[i] = 1 + rand() % maxball;
		for (int j = 0; j < i; j++)
			if (balls[j] == balls[i]) goto a;
	}
	for (int i=0;i<ballsno;i++)
	{
		cout << "Victory number: "<<balls[i]<<endl;
	}
	delete[] balls;
	

	return 0;
}