#include<iostream>
#include<string>
using namespace std;
class Square {

private:
	double side, area;
public:
	void set_side(double value)
	{
		if (value > 0)
		{
			side = value;
			area = side * side;
		}
	}
void print(void)
{
	cout << "Square: side=" << side << " area=" << area << endl;
}

};

int main()
{ 
	Square figure;
	figure.set_side(3);
	figure.print();
	cout << endl;
	return 0;
}