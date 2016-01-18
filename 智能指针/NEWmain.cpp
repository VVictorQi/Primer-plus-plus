#include <iostream>
#include<vector>
#include<memory>
using namespace std;
vector<int >*new_vector(void)
{
	return new (nothrow)vector < int > ;
}
void read_ints(vector<int>*pv)
{
	int v;
	while (cin>>v)
	{
		pv->push_back(v);
	}
	cin.clear();
}
void print_ints(const vector<int>*pv)
{
	for (const auto &v : *pv)
	{
		cout << v << " ";
	}

	cout << endl;

}
shared_ptr<vector<int> >new_vectorptr(void)
{
	return make_shared < vector<int> > ();
}
void read_intsptr(shared_ptr<vector<int>>spv)
{
	int v;
	while (cin>>v)
	{
		spv->push_back(v);
	}
	cin.clear();
}
void print_intsptr(const shared_ptr<vector<int>>spv)
{
	for (const auto &v:*spv)
	{
		cout << v << endl;
	}
}
int main(int argc, char **argv)
{
	vector<int>*pv = new_vector();
	if (!pv)
	{
		cout << "ÄÚ´æ²»×ã£¡" << endl;
		return -1;
	}
	read_ints(pv);
	print_ints(pv);
	delete pv;
	pv = nullptr;
	auto spv = new_vectorptr();
	read_intsptr(spv);
	print_intsptr(spv);
	system("pause");
	return 0;
}