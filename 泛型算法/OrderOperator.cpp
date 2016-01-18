/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
#include<fstream>
#include <functional>
using namespace std;
using namespace std::placeholders;

void output_date(const vector<string>&s)
{
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
void output_date(const vector<int>&s)
{
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
void output_date(const vector<string>::iterator beg,const vector<string>::iterator iter)
{
	for (auto i = beg; i != iter; i++)
	{
		cout << *i << "  ";
	}
	cout << endl;

}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
bool isEnoughLEngth(const string &s1)
{
	return s1.size() > 5;
}
/////////////////////////////lambda表达式函数///////////////

void add(int az)
{
	auto sumint = [az](int b) { return az + b; };
	cout << sumint(1)<<"  ";
}
void biggies(vector<string>&words, vector<string>::size_type sz)
{
	stable_sort(words.begin(),words.end(),
		[sz](const string &s1, const string &s2) { return s1.size() < s2.size(); });
	for_each(words.begin(), words.end(), [](const string &s) { cout << s << endl; });
	
}

void bigge(vector<string> &words, vector<string>::size_type sz,ostream &os=cout,char c=' ')
{	
	//os隐式捕获采用引用捕获方式。c显式捕获，值捕获方式
	for_each(words.begin(), words.end(),
		[&, c](const string &s) { os << s << c; });
	for_each(words.begin(), words.end(),
		[=, &os](const string &s) { os << s << c; });
}
ostream &print(ostream&os, const string &s, char c)
{
	return os << s << c;
}
int main(int argc, char**argv)
{
	vector<string >vec{ "china", "chinese", "word", "hello", "dear", "marry", "hurt" };
	stable_sort(vec.begin(), vec.end(), isShorter);//按照字典序排列，首先用长度大小排列，当长度相等则使用字典序。
	output_date(vec);
	auto iter = partition(vec.begin(), vec.end(), isEnoughLEngth);
	output_date(vec.begin(), iter);
	auto countnum = count_if(vec.begin(), vec.end(),
		[](const string &s) { return s.size() > 5; });
	cout <<"vec中有"<< countnum <<"个超过5的单词"<< endl;
	stable_sort(vec.begin(), vec.end(), 
		[](const string &s1, const string&s2)
		{return s1.size() > 5;});//典型的lanbda闭包表达式关系，内置的函数体
	auto sum = [](int a, int b) { return a + b; };
	cout << sum(6, 5) << endl;;
	add(6);
	//当以引用捕获一个lambda变量时，必须保证在闭包执行时变量是存在的
	vector<int>veint{ 1, -2, 3, 67, 32, -6, -32, -32, 6, -3, -523, -45, -5334, -3531, 632, 45, 32, 634, 6, 23, 523 };
	transform(veint.begin(), veint.end(), veint.begin(),
		[](int i)->int { if (i < 0) return -i; else return i; });
	//书上说在这里必须要有尾置返回类型、但是测试时不需要尾置返回类型也可以编译通过，应该是优化后的结果吧
	output_date(veint);
	//auto wc = find_if(vec.begin(),vec.end(),bind(_1,add));

	system("pause");
}*/