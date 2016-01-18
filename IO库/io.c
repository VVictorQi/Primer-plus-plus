//#include<iostream>
//#include <cstdlib>
//#include <process.h>
//#include <stdexcept>
//#include<fstream>
//#include <vector>
//#include <string>
//using namespace std;
//istream & f(istream &in)
//{
//	int v;
//	while (in >> v, !in.eof())
//	{
//		if (in.bad())
//			throw runtime_error("IO流错误");
//		if (in.fail())
//		{
//			cerr << "数据错误，请重试" << endl;
//			in.clear();
//			in.ignore(100, '\n');
//			continue;
//		}
//		cout << v << endl;
//	}
//	in.clear();
//	return in;
//}
//
//int main1(int argc, char **argv)
//{
//	cout << "hi" << ends;//空格 后刷新
//	cout << "hi" << endl;//回车后刷新
//	cout << "hi" << flush;//无空格 刷新缓冲区，不添加额外字符
//	//auto &old_state = cin.rdstate;
//	//cin.clear();
//	//cin.clear(cin.rdstate()&~cin.failbit&~cin.badbit);
//	////process_input(cin);
//	//cin.setstate(old_state);
//
//	f(cin);
//
//	system("pause");
//	return 0;
//}
//int main2()
//{
//	ifstream in("data");
//	if (!in)
//	{
//		cerr << "无法打开输入文件" << endl;
//		system("pause");
//		return -1;
//	}
//	string line;
//	vector<string>words;
//	while (in>>line)//in>>line 遇到空格就写入 getline(in>>line)是读取一行
//
//	{
//		words.push_back(line);
//	}
//	in.close();
//	vector<string>::const_iterator it = words.begin();
//	while (it!=words.end())
//	{
//		cout << *it++ << endl;
//		cout << unitbuf;
//
//	}
//	system("pause");
//	return 0;
//}
//int main3()
//{
//	ifstream in("data",ostream::app);//open the file
//	if (!in)
//	{
//		cerr << "we can't open the file" << endl;
//		return -1;
//	}
//	string line;
//	vector<string>words;
//	while (getline(in, line))
//		words.push_back(line);
//	in.close();
//	vector<string>::const_iterator it = words.begin();
//	while (it!=words.end())
//	{
//		cout << *it++ << endl;
//	}
//	system("pause");
//	return 0;
//
//}
