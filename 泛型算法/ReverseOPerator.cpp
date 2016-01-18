#include<iostream>
#include<vector>
#include <istream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;
int main(int argc, char** argv)
{
	///针对于反向迭代器使用
	vector<int >viint{ 18, 2, 435, 65, 2, 1, 5, 89, 1, 4, 3, 4, 24, 2, 56, 5 };
	for (auto r_iter = viint.crbegin(); r_iter != viint.crend();++r_iter)
	{
		cout << *r_iter << " ";
	}
	cout << endl;
	////////10.36使用find在list中查找最后一个值为0的元素///////////////////////////////
	list<int>li{10,2,45,7,2,6,2,6,3,6,3,6,3,5,7,890,2,545,624,10,642,5,3,54,0,43,634};
	auto last_z = find(li.rbegin(),li.rend(),0);
	last_z++;//这句会溢出。在容器中不存在0的时候
	int p = 1;
	for (auto iter = li.begin(); iter != last_z.base(); iter++, p++)  ;
	if (p >= li.size())
		cout << "容器中没有0" << endl;
	else
		cout << "最后一个0在第" << p << "个位置" << endl;

	system(" pause");
}