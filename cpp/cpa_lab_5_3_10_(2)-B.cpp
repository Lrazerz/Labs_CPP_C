#include<iostream>
#include<string>
using namespace std;
class FlightBooking 
{
public: 
FlightBooking(int id, int capacity, int reserved);
void printStatus();
bool reserveSeats(int number_ob_seats);
bool canceReservations(int number_ob_seats);
private:
	int id;
	int capacity;
	int reserved;
};
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this->id = id;
	if (capacity < 0)
	{
		this->capacity = 0;
		this->reserved = 0;
	}
	else {
		this->capacity = capacity;
		float value = capacity * 0.05;
		if ((reserved + value) <= capacity&&reserved>=0)
		{
			this->reserved = reserved;
		}
		else if (reserved < 0) { reserved = 0; }
		else 
		{
			cout << "number of reserved places must be less then capacity"<<endl; 
			this->reserved = 0;
		}
	}
}
void FlightBooking::printStatus()
{
	float x = float(reserved) / float(capacity);
	cout.precision(0);
	cout << "Flight " << id << " : " << reserved << '/' << capacity << "  " << '(' << fixed << x * 100 << '%' << ')'<<endl;

}
bool FlightBooking::reserveSeats(int number_ob_seats)
{
	float value = capacity * 0.05;
	if ((reserved + number_ob_seats) <= (capacity + value)) {
		reserved += number_ob_seats;
		return true;
	}
	else return false;
}
bool FlightBooking::canceReservations(int number_ob_seats)
{
	reserved -= number_ob_seats;
	if (reserved < 0) { reserved = 0; }
	return true;
}
int main()
{
	int reserved = 0,
		capacity = 0,
		n;
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;
	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	string command = "";
	booking.printStatus();
	while (command != "quit")
	{ 
		cout << "What would you like to do?:  "<<endl;
 		getline(cin,command);
		if (command.find("add")!=string::npos)
		{
			cout << "How many seats you want to reserve? " << endl;
			cin >> n;
			if (booking.reserveSeats(n) == false) { cout << "not enough free seats" << endl; }
			else{ booking.printStatus(); }
	    }
		if(command.find("cancel")!=string::npos)
		{
			cout << "How many seats you want to cancel? " << endl;
			cin >> n;
			booking.canceReservations(n);
			booking.printStatus();
		}
	}
	return 0;
}