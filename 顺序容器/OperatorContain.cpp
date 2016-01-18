/*
#include <iostream>
#include<vector>
#include <list>
#include <forward_list>
#include <stdlib.h>
#include <deque>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////
//在容器内查找s1,并将s2插入到s1后面
void test_and_insert(forward_list<string>&sflst, const string &s1, const string &s2)
{
	auto prev = sflst.before_begin();
	auto fbengin = sflst.begin();
	bool inserted = false;
	while (fbengin != sflst.end())
		if (*fbengin == s1)
		{
			fbengin = sflst.insert_after(fbengin, s2);
			inserted = true;
		}
		else
		{
			prev = fbengin;
			fbengin++;
		}
	if (!inserted)
	{
		sflst.insert_after(prev, s2);
	}
}
int main(int argc, char **argv)
{
	////////////////////////Delete member in the contain
	list<int >lst{ 1, 2, 3, 4, 4, 3, 2, 35, 76, 43, 1 };
	auto it = lst.begin();
	while (it != lst.end())
	{
		cout << *it<< " ";
		if (*it % 2)
			it = lst.erase(it);
		else
			++it;
	}
	it = lst.begin();
	cout << endl;
	while (it != lst.end())
	{
		cout << *it++<< " ";
	
	}
	cout << endl;//删除容器元素结束；
	//////////////////////////////////////////////////////////////////////////

	int ia[] = { 1, 2, 3, 4, 5, 5, 6, 23, 7, 7 };
	vector<int>iv;
	list<int>il;
	iv.assign(ia, ia + 10);//数据拷贝
	il.assign(ia, ia + 10);


	auto iiv = iv.begin();
	while (iiv != iv.end())
		if (!(*iiv & 1))
			iiv = iv.erase(iiv);
		else
			iiv++;


	auto iil = il.begin();
	while (iil != il.end())
		if (*iil & 1)
			iil = il.erase(iil);
		else
			iil++;
	for (iiv = iv.begin(); iiv != iv.end(); iiv++)
		cout << *iiv << "  ";
	cout << endl;
	for (iil = il.begin(); iil != il.end(); iil++)
		cout << *iil << " ";
	cout << endl;//删除奇偶数
	//////////////////////////////////////////////////////////////////////////
	//forward_list 特殊插入删除操作
	forward_list<int>forlist{ 1, 2, 3, 5, 6, 7, 8, 5, 3, 56, 32, 65, 324, 6 };
	auto prev = forlist.before_begin();
	auto fbegin = forlist.begin();
	while (fbegin != forlist.end())
		if (!(*fbegin % 2))//看是否为偶数或者使用 (!(*fbegin&1))
			fbegin=forlist.erase_after(prev);
		else
		{
			prev = fbegin;
			fbegin++;
		}
	fbegin = forlist.begin();
	while (fbegin != forlist.end())
		cout << *fbegin++ << " ";
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	//调用函数test_and_insert
	forward_list<string>flist{ "hello", "myheart", "dear", "hai" };
	test_and_insert(flist, "hello", "heihei1");
	auto fllist = flist.begin();
	cout << *(++fllist) << endl;

	//////////////////////////////////////////////////////////////////////////
	//list和forward_list对象的删除和插入操作主要是链式存储
	list<int>ilst{ 23, 45, 2, 3, 21, 45, 23, 234, 433, 5, 6, 76, 4, 2, 2, 5 };
	auto curr = ilst.begin();
	while (curr!=ilst.end())
	{
		if (*curr & 1)
		{
			curr = ilst.insert(curr,*curr);
			curr++;
			curr++;//这里特别注意，要加两次，一次是到插入的元素位置，一次是到下一个

		}
		else
			curr = ilst.erase(curr);
	}
	for (curr = ilst.begin(); curr != ilst.end();curr++)
	{
		cout << *curr << " ";
	}
	cout << endl;
	//////////////////////////////////////////////////////////////////////////
	//vector是如何增长的
	vector<int> words;
	for (int i = 0; i < 258;++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//316 258
	cout << words.capacity() -words.size() << endl;//58
	words={};
	for (int i = 0; i <258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//316 258
	cout << words.capacity() - words.size() << endl;//58
	for (int i = 0; i < 258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//711 517
	cout << words.capacity()- words.size() << endl;//194
	for (int i = 0; i <258; ++i)
	{
		words.push_back(i);
	}
	cout << words.capacity() << " " << words.size() << endl;//1066 775
	cout << words.capacity()-words.size() << endl;//291
	//总结是成倍线性增长的空间，但是也会有些许误差





	system("pause");

}*/