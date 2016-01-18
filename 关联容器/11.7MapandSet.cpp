/*
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string &tran(string &s)
{
	for (int p = 0; p < s.size();++p)
	{
		if (s[p]>='A'&&s[p]<='Z')
		{
			s[p] -= ('A' - 'a');
		}
		else if (s[p]==','||s[p]=='.')
		{
			s.erase(p, 1);
		}
	}
	return s;
}
int main(int argc, char **argv)
{
	vector<string>unique_word;
	string words;
	while (cin>>words)
	{
		tran(words);
		if (find(unique_word.begin(),unique_word.end(),words)==unique_word.end())
		{
			unique_word.push_back(words);
		}
	}
	for (auto v:unique_word)
	{
		cout << v << " ";
		
	}
	cout << endl;
	cin.clear();//在这里要置位因为cin的状态转变了
	set<string>unique_words;
	string word;
	while (cin>>word)
	{
		unique_words.insert(word);
	}
	for (auto v : unique_words)
	{
		cout << v << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}*/