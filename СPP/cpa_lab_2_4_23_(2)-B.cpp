#include <iostream>
using namespace std;
int main() 
{
    unsigned short int n;
    bool checkistrue = false;
    int bits1 = 0, bits2 = 0, v = 0, a=0, i=0, j=0, bit1 = 0, bit2 = 0;

    cout << "Enter the number = ";

    cin >> v;

    n = v;

    do
    {
        a++;
        v = v / 2;
        do
        {
            if( v % 2 == 0)
            {
                bits1++;
            }
            if(v % 2 == 1)
            {
                bit1++;
            }
        i++;
    }
    while(i <= (a/2));

    do
    {
        if( v % 2 == 0)
        {
            bits2++;
        }
        if(v % 2 == 1)
        {
            bit2++;
        }
    j++; 
    }while(j <= (a/2) && i> (a/2));

        if (bits1 == bits2 && bit1 == bit2 && a % 2 == 0||v == 0)
        {
            checkistrue = true;
        }
    
    }while(v / 2 >= 1);


    if(checkistrue)
    cout << n << " - bitwise palindrome" << endl;
    else
    cout << n << " is not a bitwise palindrome" << endl;
}
