
#include <iostream>
#include<string>;
using namespace std;
bool checkdigit(string passwd)
{
	for (int i = 0;i < passwd.size();i++)
	{
		if(isdigit(passwd[i]))
		{
			return true;
		}
	}
	cout << "password should contain at least 1 digit " << endl;
	return false;
}
bool checksymbol(string passwd)
{
	for(int i=0;i<passwd.size();i++)
	{
		if(isalpha(passwd[i])==false)
		{
			return true;
		}
	}
	cout << "Password should contain at least one symbol"<<endl;
	return false;
}
bool checkupper(string passwd)
{
	string comp;
	for (int i = 0;i < comp.length();i++)
	{
		comp += tolower(passwd[i]);
	}
	if (comp == passwd)
	{
		cout << "password should contain at least 1 big letter" << endl;
		return false;
	}
	else { return true; }
}
bool checklow(string passwd) 
{
	string comp;
	for(int i=0;i<comp.length();i++)
	{
		comp += toupper(passwd[i]);
	}
	if (comp == passwd)
	{
		cout << "password should contain at least 1 small letter"<<endl;
		return false;
	}
	else { return true; }

}
bool checklength(string passwd)
{
	if (passwd.size() >= 8)
	{
		return true;
	}
	else {
		cout << "The length of Password should be more then or equal eight"<<endl;
		return false;
	}
}
int main()
{
	string passwd;
	cout << "Enter a password"<<endl;
	getline(cin, passwd);
	checkdigit(passwd);
	checklength(passwd);
	checklow(passwd);
	checkupper(passwd);
	checksymbol(passwd);
	if (checklength(passwd) && checkdigit(passwd) && checklow(passwd) && checkupper(passwd) && checksymbol(passwd)) 
	{
		cout << "password is valid"<<endl;
	}
	

}