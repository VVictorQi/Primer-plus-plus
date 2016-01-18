/*
#include <iostream>
#include <vector>
#include<list>
#include<string>
#include<numeric>
#include<algorithm>
#include <fstream>
using namespace std;
int main(int argc, char ** argv)
{

	vector<int >vi = {1,78,2,34,5,5,6,5,6};
	list<int >li;
	unique_copy(vi.begin(), vi.end(), back_inserter(li));
	for (auto v:li)
	{
		cout << v << " ";
	}
	cout << endl;
	list<int >frontli;
	unique_copy(vi.begin(), vi.end(), front_inserter(frontli));
	
	for (auto v : frontli)
	{
		cout << v << " ";
	}
	cout << endl;
	list<int >insertli;
	unique_copy(vi.begin(), vi.end(), inserter(insertli,insertli.begin()));
	unique_copy(vi.begin(), vi.end(), inserter(insertli, (++insertli.begin())));
	for (auto v : insertli)
	{
		cout << v << " ";
	}
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	ifstream in("xujjian.txt");//打开文件并读取
	if (!in)
	{
		cout << "代开文件失败" << endl;
		exit(1);
	}
	istream_iterator<int> in_iter(in);//绑定流这里可以是文件流也可以是输入流cin
	istream_iterator<int> eof;//这个eof必须显式的定义出来，以便于系统识别文件的末尾
	vector<int>words;
	while (in_iter!=eof)
	{
		words.push_back(*in_iter++);
	}
	for (auto v : words)//auto C++11的新特性，遍历 auto x:v
		cout << v<<" ";
	cout << endl;
	////////////10.31///////////////////////////////////////////
	istream_iterator <int>cin_iter(cin);
	vector<int>viint;
	while (cin_iter != eof)
	{
		viint.push_back(*cin_iter++);
	}
	sort(viint.begin(),viint.end());
	ostream_iterator <int>out_iter(cout," ");
	unique_copy(viint.begin(),viint.end(),out_iter);
	system("pause");

}*/