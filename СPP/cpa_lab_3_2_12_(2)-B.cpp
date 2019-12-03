#include <iostream>

using namespace std;

int main()
{
    int matrix[10][10];
    
    //number of rows
    int n = sizeof(matrix)/sizeof(*matrix);
    
    //number of columns
    int m = sizeof(*matrix)/sizeof(**matrix);
    
    //pointer to first element of matrix
    int  *pmatrix = *matrix;
    
    //filling the multiplication table
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++) {
            *pmatrix = i * j;
            pmatrix++;
        }
    }
    
    pmatrix = *matrix;
    
    //output the multiplication table
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++) {
            //formatting output with cout.width()
            cout.width(4);
            cout << (*pmatrix)++ << " ";
        }
        cout << endl;
    }
}