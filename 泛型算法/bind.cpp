/*
#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<fstream>
#include<functional>
#include<string>
#include<ostream>
using namespace std;
using namespace std::placeholders;
inline void output_date(const vector<string>&s)
{
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
bool check_size(const string &s, string::size_type sz)
{
	return s.size() > sz;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	output_date(words);
	auto bc = count_if(words.begin(), words.end(), bind(check_size, _1, sz));
}
int main(int argc, char **argv)
{
	ifstream in(argv[1]);
	if (!in)
	{
		cerr << "can't open the file";
		exit(1);
	}
	vector<string>words;
	string word;
	while (in >> word)
		words.push_back(word);
	biggies(words, 6);

}*/