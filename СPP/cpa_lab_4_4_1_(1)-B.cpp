#include <iostream> 
#include <string> 
#include <algorithm>
#include <map>
using namespace std;
string removeempty(string &test)
{
	test.erase(remove(test.begin(), test.end(), ' '), test.end());
	return test;

}
void showarray(int counters[], string alpha)
{
	
	for (int i = 0;i < 26;i++)
	{
		cout << alpha.substr(i,1) <<"------"<< counters[i] << endl;
	}
}
string Changeregister(string &test) 
{
	for_each(test.begin(), test.end(), [](char& c) {
		c = ::tolower(c);
		});
	return test;
}
bool checkpangram(int counters[])
{
	for (int i = 0; i < 26;i++)
	{
		if (counters[i] == 0) { return false; }
	}
	return true;
}
int main(void) {
	int counters[26] = {};
	string alphabet = "abcdefghijklmnopqrstuwvxyz";
	string test;
	getline(cin, test);
	removeempty(test);
	Changeregister(test);
	
	for (int i = 0;i < alphabet.length();i++)
	{
		for (int j = 0;j < test.length();j++) {
			if (test.substr(j, 1)==alphabet.substr(i,1))
			{
				counters[i]++;
			}
			
		}
	}
	showarray(counters,alphabet);
	if (checkpangram(counters))cout << "Pangram" << endl;else
	{
		cout << "not Pangram"<<endl;
	}
			return 0;
}