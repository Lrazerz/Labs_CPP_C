#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string remove_spaces(string& str)
{
	str.erase(std::unique_copy(str.begin(), str.end(), str.begin(),
		[](char c1, char c2) { return c1 == ' ' && c2 == ' '; }),
		str.end());
	return str;
}
string removewords(string stop_words,string &sentance)
{
	for_each(sentance.begin(), sentance.end(), [](char& c) {
		c = ::tolower(c);
		});
	size_t pos = 0;
	size_t change = 0;
	string sign = ",";
	string token;
	int size;
	while ((pos = stop_words.find(sign)) != string::npos) {
		token = stop_words.substr(0, pos);
		size = token.size();
		if (sentance.find(token) != string::npos)
		{
			change = sentance.find(token);
			sentance.erase(change, token.size());
		}
		stop_words.erase(0, pos + sign.length());
	}
	if(sentance.find(stop_words)!=string::npos)
	{
		change = sentance.find(stop_words);
		sentance.erase(change, stop_words.length());
	}
	return sentance;
}
int main(){
	string stop_words;
    string sentence;
	getline(cin, stop_words);
	getline(cin, sentence);
	removewords(stop_words, sentence);
	remove_spaces(sentence);
	cout << sentence << "\n";
}