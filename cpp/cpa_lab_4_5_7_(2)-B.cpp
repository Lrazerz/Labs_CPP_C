#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string change(string from,string to,string &sentence)
{
	size_t pos = 0;
	if(sentence.find(from) !=string::npos)
	{
		pos = sentence.find(from);
		return sentence.replace(pos, from.size(), to);
	}
	
}
int main()
{
	string from;
	getline(cin, from);
	string to;
	getline(cin, to);
	string sentence;
	getline(cin, sentence);
	
	cout << change(from,to,sentence) << "\n";
}