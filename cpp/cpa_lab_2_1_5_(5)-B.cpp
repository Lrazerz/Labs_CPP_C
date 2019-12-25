#include <iostream>

using namespace std;

int main ()
{
    int Year;

    cin>>Year;

    int Month = 3;

    int G = Year % 19 + 1;
    int C = Year / 100 + 1;
    int X = ( 3 * C ) / 4 - 12;
    int Y = ( 8 * C + 5 ) / 25 - 5;
    int Z = ( 5 * Year ) / 4 - X - 10;
    int E = ( 11 * G + 20 + Y - X ) % 30;

    if (E == 24) {E++;}

    if ((E == 25) && (G > 11)) E++;

    int N = 44 - E;

    if (N < 21) N = N + 30;

    int P = ( N + 7 ) - ( ( Z + N ) % 7 );

    if ( P > 31 )
    {
        P = P - 31;
        Month = 4;
    }

    cout << Month << P;

    return 0;
}
