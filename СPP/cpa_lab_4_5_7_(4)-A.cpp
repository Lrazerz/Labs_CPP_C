#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse_check(string& words)
{
	size_t pos = 0;
	string sign = " ";
	string token;
	string change;
	pos = words.find(sign);
	token = words.substr(0, pos);
	words.erase(0,token.size()+1);
	change = words;
	sort(token.begin(), token.end());
	sort(change.begin(), change.end());
	if (token == change) { return "anagrams"; } 
	else { return "not anagrams"; }
}
int main()
{
	string words;
	getline(cin, words);
	cout<<reverse_check(words);
}