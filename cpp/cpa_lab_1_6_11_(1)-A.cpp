#include <iostream>
using namespace std;

int main(void)
{
	bool answer; 
	int value; 

	cout << "Enter a value: "; 
	cin >> value; 

	bool condition1 = value >= 0 && value < 10;

	bool condition2 = value * 2 < 20 && value - 2 > -2;

	bool condition3 = value - 1 > 1 && value / 2 < 10;

	bool condition4 = value == 111;

	answer = condition1 || condition2 || condition3 || condition4;

	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}
