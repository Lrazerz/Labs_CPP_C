#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	float grossPrice, taxValue, taxRate, netPrice;

	cout << "Enter the gross price: ";
	cin >> grossPrice;

	cout << "Enter the tax rate: ";
	cin >> taxRate;

	if (taxRate >= 100 || taxRate <= 0) {
		cout << "Enter a tax rate greater then 0 and less then 100";
		return;
	}

	taxRate /= 100;

	netPrice = grossPrice / (1 + taxRate);
	
	taxValue = grossPrice - netPrice;

	cout << "Net price: " << netPrice << endl << "Tax value: " << taxValue;
}
