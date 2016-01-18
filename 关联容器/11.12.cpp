#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include <algorithm>
#include<utility>
#include<map>

using namespace std;
void remove_author(multimap<string, string>&book, const string &author)
{
	auto pos = book.equal_range(author);
	if (pos.first == pos.second)
	{
		cout << "并没有" << "这个作者" << endl;
	}
	else
		book.erase(pos.first, pos.second);
}
void print_books(multimap<string, string>&book)
{
	cout << "当前数目有：" << endl;
	for (auto v:book)
	{
		cout << v.first << ",《" << v.second << "》" << endl;
	}
	cout << endl;
}
int main(int argc, char **argv)
{
	/*vector<pair<string, int>>data;//pair的vector
	string words;
	int v;
	while (cin>>words&&cin>>v)//在这里明显cin不可以用。需要读取文件，或许本来就应该按照文件流的方式读取，
	{
		data.push_back(pair<string, int>(words, v));

	}
	for (auto v:data)
	{
		cout << v.first <<"  "<< v.second << endl;
	}
*/

	multimap<string, string>books;
	books.insert({ "Barth,Jhon", "Sot-Weed Factor" });
	books.insert({ "金庸", "笑傲江湖" });
	books.insert({ "忘语", "凡人修仙传" });
	print_books(books);
	remove_author(books,"忘语");
	print_books(books);
	system("pause");
	return 0;
}