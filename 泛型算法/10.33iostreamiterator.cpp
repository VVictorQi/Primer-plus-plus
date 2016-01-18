/*
//////////////////////////////////////////////////////////////////////////
//本文件主要体现了iostream迭代器的应用
#include<iostream>
#include<vector>
#include <istream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;
int main(int argc, char ** argv)
{
	//在这里利用argc和argv数组可以记录输入的文件名从而对文件进行操作，在这个例子为了让代码更加清晰可见在这里使用直接对文件操作，而不再输入的情况下进行操作，文件名直接默认。
	ifstream  openedfile("xujjian.txt");
	ofstream outfile1("xujian1.txt");//文件默认模式是不存在则新建此文件，不存在的话你会发现在项目目录下存在了此文件
	ofstream outfile2("xujian2.txt");
	if (!openedfile)
	{
		cout << "打开数据文件失败" << endl;
		exit(1);
	}
	if (!outfile1)//在这里存在一个文件误区就是如果文件不存在，则打开失败，需要传入参数，保证如果定向输出文件失败的话，可以新建此文件
	{
		cout << "打定向输出文件1失败" << endl;
	
	}
	if (!outfile2)
	{
		cout << "打开定向输出文件2失败" << endl;
		
	}
	istream_iterator<int>eof, in_iter(openedfile);
	ostream_iterator<int>out_iter1(outfile1," ");
	ostream_iterator<int>out_iter2(outfile2, "\n ");//第二个参数保证没输出一个数据后面的分隔符
	while (in_iter != eof)//保证将这个文件的偶数分割开来
	{
		if (*in_iter & 1)
		{
			*out_iter1++ = *in_iter;
		}
		else
			*out_iter2++ = *in_iter;
		in_iter++;
	}
	system("pause");

}*/