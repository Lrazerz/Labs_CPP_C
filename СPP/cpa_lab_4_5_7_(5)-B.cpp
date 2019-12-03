
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
string Changeregister(string& normal_words)
{
	for_each(normal_words.begin(), normal_words.end(), [](char& c) {
		c = ::tolower(c);
		});
	return normal_words;
}
int checksymbols(string regux,string token)
{
	int count = 0;
	string l;
	for (int i = 0;i < regux.length();i++)
	{
		if (regux[i] == 'A')
		{
			l = token.substr(i, 1);
			if (l < "a" || l>"z")
			{
				break;
			}
		}
		else if (regux[i] == 'D')
		{
			l = token.substr(i, 1);
			if (l < "0" || l>"9")
			{
				break;
			}

		}
		else if (regux[i] == '-')
		{
			l = token.substr(i, 1);
			if (l != "-") { break; }
		}
		else if (regux[i]=='?')
		{
			count++;
			continue;
			
		}
		else 
		{
			l = regux[i];
			if (token.substr(i, 1) != l) { break; }
		}
		count++;

	}
	return count;
}
string separate_words(string sentence,string regux)
{
	size_t pos = 0;
	string sign = " ";
	string token;
	string normal_words;
	while ((pos = sentence.find(sign)) != string::npos) {
		token = sentence.substr(0, pos);
		if (regux.size() == token.size()) { 
			normal_words+=token+" ";
		}
		sentence.erase(0, pos + sign.length());
	}
	if (regux.size() == sentence.size()) { normal_words += sentence; }
	return normal_words;
}
void findsymbols(string regux, string sentence)
{
		string normal_words=separate_words(sentence, regux);
		Changeregister(normal_words);
		
		 size_t pos = 0;
		 string sign = " ";
		 string token;
		 int count=0;
		 while ((pos = normal_words.find(sign)) != string::npos) {
			 token = normal_words.substr(0, pos);
			count= checksymbols(regux, token);
             if (count == token.size()) { cout << token<<endl; }
			 normal_words.erase(0, pos + sign.length());
		 }
		 count = checksymbols(regux, normal_words);
		 if (count == normal_words.size()) { cout << normal_words<<endl; }
			  		
	}
int main()
{
	string regux;
	string sentence;
	getline(cin, regux);
	getline(cin, sentence);
	findsymbols(regux, sentence);

}

