#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	string name;
	int    age;
	string nickname;
	int mmr;
	// Your code here
};
void print(Person* person)
{
	cout << person->name <<" is " << person->age << " years old " <<" his nickname is "<<person->nickname<<" his mmr is "<<person->mmr<<endl;
}
int main()
{
	Person person;
	person.name = "Bogdan";  
	person.age  = 19;
	person.nickname = "Zhuk";
	person.mmr = 10000;
	cout << "Meet " << person.name<<endl; 
	print(&person);
	// Your code here
	return 0;
}