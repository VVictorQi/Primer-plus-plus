/*
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
void add_family(map<string, vector<string>>&families, const string &familyname)
{
	if (families.find(familyname) == families.end())
		families[familyname] = vector<string>();
}
void add_child(map<string, vector<string>>&families, const string &familyname, const string &familychildname)
{
	if (families.find(familyname)== families.end())
	{
		families[familyname] = vector <string>();	
	}
	families[familyname].push_back(familychildname);//保证孩子肯定有这个父亲，虽然现实中有可能会出现伦理性问题
}
int main(int argc, char ** argv)
{
	map<string, vector<string>>families;
	add_family(families, "victor");
	add_child(families, "victor", "qi");
	add_family(families, "hot");
	add_family(families, "hottukey");
	add_family(families, "hppu");
	add_family(families, "xinzhu");
	add_family(families, "dear");
	add_child(families, "victor", "qing");
	add_child(families, "doubi", "heihei");//总是会出现的 
	for (auto f:families)
	{
		cout << f.first << ":";
		for (auto c:f.second)
		{
			cout << c << "  ";
		}

		cout << endl;
	}
	system("pause");
}*/
//重载输出操作符和输入操作符
/*
#include<iostream>
#include<ostream>
#include<string>
using namespace std;

class Dog
{

};
class Sale_item
{
private:
	friend ostream&operator<<(ostream&out, const Sale_item &s);//声明为友元函数
	string isbn;
	unsigned units_sold;
	double revenue;
public:
	Sale_item(string &book, unsigned count, double amount) :
		isbn(book), units_sold(count), revenue(amount)
	{
	}
	Sale_item() :units_sold(0), revenue(0.0) {}
	void operator>>(const Sale_item&item);


};
//ostream &operator<<(ostream &out,const Sale_item&s);
ostream & operator << (ostream &out, const Sale_item&s)
{
	out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue;
	return out;
}

int main(int argc, char **argv)
{

	Dog blankdog;
	Sale_item item1(string("0-222-131-345-X"), 2, 4.7), item2;
	cout << item1;
	system("pause");
	return 0;
}*/