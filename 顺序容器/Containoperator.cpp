/*
#include<iostream>
#include <vector>
#include<string>
#include <list>
#include <deque>
#include<forward_list>
#include <cstdlib>
#include <process.h>
using namespace std;
int main(int argc, char**argv)
{
	list<string>slist;
	slist.insert(slist.begin(),"10");
	slist.insert(slist.end(), "12");
	vector<string>Vstring{ "hello", "aff", "teny" };
	Vstring.insert(Vstring.end(), slist.begin(), slist.end());
	//Vstring.insert(Vstring.begin(), { "asasf", "assdf" });//错误显示无效的迭代器范围
	vector<string>::iterator it = Vstring.begin();
	cout << *it<<endl;
	//////////////////////////////////////////////////////////////////////////
	int som_val = 1;
	vector<int>iv = { 1, 1, 1, 1, 1, 1, 1, 1 };
	vector<int> ::iterator Viter = iv.begin();
	int org_size = iv.size(), new_ele = 0;
	while (Viter!=(iv.begin()+org_size/2+new_ele))
		if (*Viter == som_val)
		{
			Viter=iv.insert(Viter, 2 * som_val);//当容器vector插入新数据后，会重排，导致原有迭代器失效。此时可以迭代两次，使其推到下一个新位置上
			Viter++;
			Viter++;//要使用Viter++;必须用操作后返回的iterator值而不仅仅只执行iv.insert();操作
		//	new_ele++;//作为标记位
		}
	else
		Viter++;
	//////////////////////////////////////////////////////////////////////////
	//back不适用于forward_list
	//at和下标操作只适用于string vector deque array
	//	cout << iv.at[4];
	cout << iv.at(4); 
	cout << iv[3];
	cout<<iv.front();
	//////////////////////////////////////////////////////////////////////////
	vector<int>nullvector;
	//nullvector.at(0);
	//cout << nullvector[0];
	//对于一个空容器调用front和back就像使用一个越界的下标一样 ，是一种严重的程序设计错误，所以他会抛出异常


	//////////////////////////////////////////////////////////////////////////
	


	
	list<string>lst;
	auto iter = lst.begin();
	string word;
	while (cin>>word)
	{
		iter = lst.insert(iter, word);
	}
	for (auto it = lst.cbegin(); it != lst.end(); it++)
	{
		cout << *it << endl;
	}

	cin.clear();//将cin的状态清除要不然cin默认遇到eof置为有效位


	//////////////////////////////////////////////////////////////////////////deque
	deque<string>Deque;
	string Dword;
	while (cin >> Dword)
		Deque.push_back(Dword);
	for (auto it = Dword.begin(); it != Dword.end();it++)
	{
		cout << *it << endl;
	}
	cin.clear();
	
//////////////////////////////////////////////////////////////////////////list
	list<string>iList;
	string Lword;
	while (cin >> Lword)
		iList.push_back(Lword);
	for (auto it = iList.cbegin(); it != iList.end(); it++)
	{
		cout << *it << endl;
	}
	cin.clear();
	system("pause");

}
*/
