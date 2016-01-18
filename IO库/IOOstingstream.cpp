#include <iostream>
#include<sstream>
#include <vector>
#include <stdexcept>
using namespace std;
istream &f(istream &in)
{
	string v;
	while (in >> v, !in.eof())
	{
		if (in.bad())
			throw runtime_error("IO流错误");
		if (in.fail())
		{
			cerr << "数据错误" << endl;
			in.clear();
			in.ignore(100, '\n');
			continue;
		}
		cout << v << endl;

	}
	in.clear();
	return in;
}
int main()
{
	ostringstream msg;
	msg << "C++　ＰＲＩＭＥＲ" << endl;
	istringstream in(msg.str());
	f(in);

	system("pause");
	return 0;
}


////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	union
	{
		short s;
		char c[sizeof(short)];
	} un;
	un.s = 0x0102;      //十六进制位是每两位存在一个寄存器里面
	if (sizeof(short) == 2)
	{
		if (un.c[0] == 1 && un.c[1] == 2)
			printf("big-endian\n");
		else if (un.c[0] == 2 && un.c[1] == 1)
			printf("little-endian\n");
		else
			printf("unknown\n");
	}
	else
		printf("sizeof(short)= %d\n", sizeof(short));
	system("pause");
	exit(0);
}
////////////////////////////////////////////////////////////////////////
#include <iostream>
#include<fstream>
#include<sstream>
#include <vector>
#include<string>
using namespace std;
int main(int argc, char **argv)
{
	ifstream in("data");
	if (!in)
	{
		cerr << "we cant open the file" << endl;
		return -1;

	}
	string line;
	vector<string>words;
	while (getline(in, line))
	{
		words.push_back(line);
	}
	in.close();
	vector <string>::const_iterator it = words.begin();
	while (it != words.end())
	{
		istringstream line_str(*it);
		string word;
		while (line_str >> word)
			cout << word << "  ";
		cout << "  " << endl;
		++it;
	}

}
//////////////////////////////////////////////////////////////////////////
#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
struct PersonInfo 
{
	string name;
	vector<string>phones;
};
string format(const string &s) { return s; }
bool valid(const string &s) { return true; }
int main(int argc, char *argv[])
{
	string line, word;
	vector<PersonInfo>people;
	istringstream record;
	if (argc != 2);
	{
	cerr << "请给出文件名" << endl;
	system("pause");
	return -1;
	}
	ifstream in("data");
	if (!in)
	{
		cerr << "文件打不开" << endl;
		return -1;
	}
	while (getline(in,line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	ostringstream os;
	for (const auto &entrry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entrry.phones)
		{
			if (!valid(nums))
			{
				badNums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);

			}
		}
		if (badNums.str().empty())
			os << entrry.name << " " << formatted.str() << endl;
		else
			cerr << entrry.name << " " << formatted.str() << endl;


	}
	cout << os.str() << endl;
	system("pause");
	return 0;
}