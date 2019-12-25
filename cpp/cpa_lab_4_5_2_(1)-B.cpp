#include <iostream>
#include <string> 

using namespace std;
string checkip(string &ip) 
{
	int counter = 0;
	if (ip.length() > 15|| ip.length()<7) { return "Too many characters in a part"; }
	for (int i = 0;i < ip.size();i++)
	{
		if (ip[i] < 45 || ip[i]> 58) { return "Only digits and dots allowed"; }
	}
	size_t pos = 0;
	string sign = ".";
	string token;
	int size;
	while ((pos = ip.find(sign)) != string::npos) {
		token = ip.substr(0, pos);
		if (token > "255" || token < "1") 
		{
			return "Too big a value of a part";
		}
		size = token.size();
		if(size>3||size<1)
		{
			return "Too many characters in a part";
		}
		ip.erase(0, pos + sign.length());
	}
	if (ip > "255" || ip < "1")
	{
		return "Too big a value of a part";
	}
	size = ip.size();
	if (size > 3 || size < 1)
	{
		return "Too many characters in a part";
	}
	return "corect ip"; 
}
int main(void) {
	string ip;
	getline(cin, ip);
	cout<<checkip(ip)<<endl;
	return 0;
}