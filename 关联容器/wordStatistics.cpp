/*
#include<iostream>
#include<vector>
#include <istream>
#include <fstream>
#include <string>
#include <list>
#include<map>
#include<set>
#include <algorithm>
#include <numeric>
using namespace std;
int main(int argc, char**argv)
{
/ *
	map<string, size_t>word_count;
	set<string>exclude = {"The","the","Hi","hi","so","So","An","an","and","And","Or","or","But","but","A","a"};
	map<string, string>authors { { "xujian", "XU" }, { "xinzhuokun", "XIN" } };
	string word;
	while (cin>>word)
	{
		++word_count[word];
	}
	for (const auto &w:word_count)
	{
		cout << w.first << "\toccur\t" << w.second << ((w.second) > 1 ? "\ttimes!" : "\ttime !") << endl;
	}* /
	map < map<string, string>, struct a > ;//存在图到图之间的映射
	vector<int>vint;
	for (auto i = 0; i != 10;++i)
	{
		vint.push_back(i+rand()%10);
		vint.push_back(i+rand()%100);
	}
	set<int>iset(vint.cbegin(), vint.cend());
	multiset<int>miset(vint.cbegin(), vint.cend());
	cout << vint.size() << endl;
	cout << iset.size() << endl;
	cout << miset.size() << endl;
	/////////////////11.7////////////////////////////

	system("pause");
}*/