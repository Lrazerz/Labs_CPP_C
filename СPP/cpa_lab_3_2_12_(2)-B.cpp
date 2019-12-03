#include<iostream>
using namespace std;
int main(void)
{
	int matrix[10][10] = { };
	int* ptr=*matrix;
	for(int j=0;j<10;j++)
	{
		for(int i=0;i<10;i++)
		{
			*(*(matrix + i) + j) = ((j+1) *(i+1));
		}
	}
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++) 
		{
			cout.width(4);cout << matrix[i][j]; 
		}cout << endl; 
	}
	return 0;
}