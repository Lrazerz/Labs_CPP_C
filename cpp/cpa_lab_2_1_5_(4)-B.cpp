#include <iostream>

using namespace std;

int main(void)
{

  int r, y, m, d;
 
  cout << "Enter a year";
  cin >> y;
  cout << "Enter a month";
  cin >> m;
  cout << "Enter a day";
  cin >> d;
  
  m = m-2;
  m = (m*83)/32;
  m = d+m;
  m = y+m;
  m = (y/4) + m;
  m = m-(y/100);
  m = m + (y/400);
  r = m%7;
  
  if (r == 0)
  cout << "Sunday";
  
  if (r == 1)
  cout << "Monday";
  
  if (r == 2)
  cout << "Tuesday";
  
  if (r == 3)
  cout << "Wednesday";
  
  if (r == 4)
  cout << "Thursday";
  
  if (r == 5)
  cout << "Friday";
  
  if (r == 6)
  cout << "Saturday";

}
