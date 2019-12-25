#include<string>
#include<iostream>
#include <algorithm>
#include <iterator>
using namespace std;
void remove_spaces(std::string& str)
{
	str.erase(std::unique_copy(str.begin(), str.end(), str.begin(),
			[](char c1, char c2) { return c1 == ' ' && c2 == ' '; }),
		str.end());
}

int main(){
	string sentence;
	getline(std::cin, sentence);
	remove_spaces(sentence);
	cout << sentence << "\n";
}
