#include <iostream>
using namespace std;
float Sumofmarks(int m,int n, int** cources)
{
	float number = 0;
	 {
		for (int j = 0; j < m; j++)
			number += cources[n][j];	
		number /= m;
	}return number;
}
void Print(int m, int n, int** cources)
{
		for (int j = 0; j < m; j++) {
			cout << cources[n][j] << " ";
		
	}
	
}
int main()
{   float avarage=0.0;
	int n, m;
	
	cout << "Enter a number of cources:\n";
	cin >> n;
	int** cources;
	cources = new int* [n];
	for (int i = 0;i < n;i++)
	{   cout << "enter a number of marks:\n";
		cin >> m;
		cources[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cout << "enter a mark";
			cin >> cources[i][j];
		}
			Print(m, i, cources);
			cout << "average mark for course: " << Sumofmarks(m, i, cources) << endl;
			avarage += Sumofmarks(m, i, cources);		
	}
         cout<<"avarage mark for whole course: "<< avarage / n<<endl;
		cout << endl;
	}
