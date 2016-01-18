//#include <iostream>
//#include<vector>
//#include<list>
//#include<deque>
//#include <forward_list>
//#include<array>
//using namespace std;
//vector<vector<int>>lines;
//bool search_vec(vector<int>::iterator beg, vector<int>::iterator end, int val)
//{
//	for (; beg != end; beg++)
//		if (*beg == val)
//			return true;
//	return false;
//}//查找函数
//vector<int>::iterator search_vel(vector<int>::iterator beg, vector<int >::iterator end, int val)
//{
//	for (; beg != end; beg++)
//		if (*beg == val)
//			return beg;
//	return end;
//
//}
//int main1(int argc, char **argv)
//{
//	vector < int > line = {1,2,3,4,5,6,7,7,8,345};
//	vector < int >::iterator iter;
//	vector <int> ::difference_type diffiter;
//	list<string>::value_type valu;//value_type 表示元素类型
//	//list<string>::reference  & ;//为了写入元素，需要非常量引用类型
//	//////////////////////////////////////////////////////////////////////////
//		
//	list <string> Name = { "Milton", "Shakespeare", "Austrn" };
//	auto it1 = Name.begin();
//	auto it2 = Name.end();//iterator
//	auto it3 = Name.rbegin();//reverser_iterator
//	auto it4 = Name.rend();//reverse_iterator
//	auto it5 = Name.crbegin();//const_reverse_iterator
//	vector<const char*> arcticles = { "a", "an", "the" };
//	list<string> list2(Name);
//	deque<string>word();
//	forward_list <string> words(arcticles.begin(), arcticles.end());
//
//	//////////////////////////////////////////////////////////////////////////
//	vector<int>ivec(10, -1);//10个元素 初始值为-1
//	list<string>scec(10, "shi");//同理
//	deque<int>hen(10);//10个元素为0
//	forward_list <int>ivecl(10);//10个元素 每个初始化为0
//	/////////////////////////////////////////////////////l/////////////////////
//	array < int, 42 >lai= {10,2};
//	array < string, 42 > ;
//	array< int, 10 >::size_type i;
//	//array<int>::size_type j;不是一个类型
//
//	//六种初始化vector方式
//	vector <int> ilist1;//默认初始化vector为空容器内无元素
//	vector<int>ilist2(ilist1);//直接拷贝，两个容器必须类型相同
//	vector<int>list2_1 = ilist1;
//	vector<int >ilist3 = { 3, 4, 3, 56, 7, 34, 23, 4 };//初始化
//	vector<int >ilist3_1 = { 3, 4, 3, 56, 7, 34, 23, 4 };//同类型
//	vector<int> ilist4(ilist3_1.begin() + 2, ilist3_1.begin() + 5);//迭代器初始化
//	vector<int>ilist5(7);
//	vector<int>ilist6(7, 8);
//	//////////////////////////////////////////////////////////////////////////
//	list<int>mlist{ 23, 5, 45, 656, 7, 541, 2 };
//	vector<int>ivec_1{ 46, 678, 43, 45, 36, 3423, 534 };
//	vector<double>mdevl(ivec_1.begin(), ivec_1.end());//元素类型相容，采用范围初始化；
//	vector<double>mdev2(mlist.begin(), mlist.end());//元素类型相同，使用范围初始化
//	cout << mdev2.capacity() << "  " << mdev2.size() << " " << mdev2[0] << " " << mdev2[mdev2.size() - 1] << endl;
//	cout << mdevl.capacity() << "  " << mdevl.size() << " " << mdevl[0] << " " << mdevl[mdev2.size() - 1] << endl;
//	
//
//
//	//////////////////////////////////////////////////////////////////////////
//	cout << search_vec(line.begin(), line.end(), 3);
//	cout << search_vec(line.begin(), line.end(), 45)<< endl;
//	cout << search_vel(line.begin(), line.end(), 45)-line.begin();
//	cout << search_vel(line.begin(), line.end(), 4) - line.begin();
//	system("pause");
//	return 0;
//}
