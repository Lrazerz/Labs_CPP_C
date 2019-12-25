#include<string>
#include<iostream>
#include <algorithm>
#include <iterator>
using namespace std;
void RemoveDublicate(string& str) {
	
	size_t pos = 0;
	string sign = " ";
	string token;
	int size;
	while ((pos = str.find(sign)) != string::npos) {
		token = str.substr(0, pos);
		size = token.size();
		if(str.find(token,pos) !=string::npos)
		{
			str.erase(0,0);
		}
		else { cout << token << " "; }
		str.erase(0, pos + sign.length());
	}
}
	
int main() {
	string s;
	getline(cin, s);
	RemoveDublicate(s);
	std::cout << s;
	return 0;
}