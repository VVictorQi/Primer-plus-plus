/*
#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include <iterator>
using namespace std;
void output_date(const vector<int>&s)
{
	for (auto i = s.begin(); i != s.end();i++)
	{
		cout << *i << "  " ;
	}
	cout << endl;

}
int main(int argc, char **argv)
{
	vector<int>vec{ 1, 1,1,1,1,1,1,32, 5, 6, 34, 312, 6, 21, 5, 35, 0 };
	auto result = find(vec.begin(),vec.end(),18);
	cout << ((result==vec.end())?"is not present":"i s the present") << endl;
	int al[10] = { 213, 43, 76, 324, 67, 453, 21, 76, 4, 214 };
	auto resultl = find(al + 1, al + 4, 21);
	cout << *resultl<<endl;
	auto resultnum = count(vec.begin(),vec.end(),1);//count也需要三个参数统计数值出现的次数
	auto sum = accumulate(vec.begin(), vec.end(), 0);
	auto ittsum = accumulate(al, al + 10, 0);
	cout << sum << " " << ittsum << endl;
	cout <<resultnum << endl;
	vector<string>str={ "-86", "-679", "-2341", "-4542", "-213" };
	vector<string>str1= { "-86", "-679", "-2341", "-4542", "-213" };
	string sumstring = accumulate(str.cbegin(),str.cend(),string(""));
	auto res = equal(str.begin(), str.end(), str1.begin());
	cout << res<<endl;
	vector<double>vec1{ 1, 1.3, 1, 1, 1, 1.2, 1, 32, 5, 6, 34, 312, 6, 21, 5, 35, 0 };
	vector<double>vec2{ 1, 1, 1, 1, 1, 1, 1, 32, 5, 6, 34, 312, 6, 21, 5, 35, 0 };
	auto doubres=accumulate(vec1.cbegin(), vec1.cend(), 0.0);
	cout << doubres << endl;
	vector<int >lla;
	auto it = back_inserter(lla);
	*it = 22;
	fill_n(back_inserter(lla), 10, 0);//添加10个元素到lla中；
	sort(vec.begin(), vec.end());
	output_date(vec);
	unique(vec.begin(), vec.end());
	output_date(vec);
	system("pause");
}*/