#include <iostream>
#include <stdexcept>
using namespace std;
class ShopItemOrdder
{
private:
	string name;
	double price;
	int numbers_ofitem_in_order;
public:
	ShopItemOrdder(string name,double price,int numbers_ofitem_in_order)
	{
		if(name.empty())
		{
			throw invalid_argument("Name must has value");
		}
		if(price<=0)
		{
			throw invalid_argument("price should be bigger then 0");
		}
		if(numbers_ofitem_in_order<=0)
		{
			throw invalid_argument("numbers of items can not be 0 or less");
		}
		this->name = name;
		this->price = price;
		this->numbers_ofitem_in_order = numbers_ofitem_in_order;
	}
	string ReturnName()
	{
		return name;
	}
	void SetName(string name)
	{
		if (name.empty())
		{
			throw invalid_argument("Name must has value");
		}
		this->name = name;
	}
	double Returnprice()
	{
		return price;
	}
	void Setprice(double price)
	{
		if (price<=0)
		{
			throw invalid_argument("price should be bigger then 0");
		}
		this->price = price;
	}
	int Returnamount(int numbers_ofitem_in_order)
	{
		return numbers_ofitem_in_order;
	}
	void Setnamount(int numbers_ofitem_in_order)
	{
		if (numbers_ofitem_in_order <= 0)
		{
			throw invalid_argument("numbers of items can not be 0 or less");
		}
	}
	float Totalprice()
	{
		return price * numbers_ofitem_in_order;
	}
	void Show()
	{
		cout << "The item with name " << name << " with  price " << price << " the total number of items are " << numbers_ofitem_in_order<<endl;
	}
};
int main()
{
	ShopItemOrdder item1("Item1", 10.50, 5);

	item1.Show();
	cout << "Total price is " << item1.Totalprice() << "$" << endl << endl;

	item1.Setnamount(4);
	item1.Show();
	cout << "Total price is " << item1.Totalprice() << "$" << endl << endl;

	item1.SetName("pen");
	item1.Setprice(9.99);
	cout << "Price of " << item1.ReturnName() << " is " << item1.Returnprice() << "$" << endl;
	cout << "Total price is " << item1.Totalprice() << "$" << endl;

	return 0;
}