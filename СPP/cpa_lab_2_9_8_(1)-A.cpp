#include <iostream>

using namespace std;

int main()
{
    int vect1[9] = {4, 7, 2, 8, 1, 3, 0};
    int vect2[9];
    
    int vect1Length = sizeof(vect1) / sizeof(*vect1);
    int vect2Length = sizeof(vect2) / sizeof(*vect2);

    vect2[0] = vect1[vect1Length - 1];
    for(int i = 1; i < vect1Length && i < vect2Length; ++i)
        vect2[i] = vect1[i - 1];

    for(int i = 0; i < vect2Length; i++)
        cout << vect2[i] << ' ';
    cout << endl;
    return 0;
}