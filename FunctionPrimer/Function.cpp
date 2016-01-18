#include<iostream>
#include <vector>
#include <initializer_list>
#include <string>
#include<cstdarg>
using namespace std;
typedef int arrT[10];//类型别名
using arrT = int[10];//等价声明
arrT* funlc(int i);//数组指针
int fact(int val)//阶乘
{
	int ret = 1;
	while (val>1)
		ret *= val--;
	return ret;
}
size_t count_calls()//返回自身被调用的次数
{
	static size_t ctr = 0;
	return ++ctr;
}
void print(vector<int >::const_iterator beg,
	vector<int>::const_iterator end);//在头文件中进行函数声明

void reset(int &i)
{
	i = 0;//对于引用类似于指针，不同于副本机制；使用引用避免拷贝；节约空间操作
}
bool isShorter(const string&s1, const string &s2)//对于这里，如果函数无需改变引用形参的值，最好将其声明为常量引用；
{
	return s1.size() > s2.size();//比较两串字符串是否相等
}
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{//对于一次性想返回好几个数据的人，要么重新定义数据结构，要么添加一个隐式参数
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}
void func(const int i)//func 能读取i，但是不能向i写值，const定义
{
}
void funcc(int i )//i)//error C2084: 函数“void func(const int)”已有主体;参见“func”的前一个定义
{//这句话是错误的，在这里就是为了体现这些区别

}

//对于指针和引用形参用const 修饰

int i = 42;
const int *cp = &i;
const int &r = i;
const int &r2 = 42;
//int *p = cp;类型不同，int &r3=r;int &r4=42;//非常量引用
bool is_sentence(const string&s)
{
	string::size_type ctr = 0;//检测s字符串是否为一个句子
	return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}
bool is_enpty(string&s)
{
	return s.empty();
}
 
//管理指针常用的三种技术
//1.使用标记指定数组长度
void print(const char *cp)
{				while (*cp)//每一个字符串中结束符为/0作为判断判断结束符为空；
			cout << *cp++;
}//适用于有结束符标识字符串，对于整形之类数组，基本无效；
//2.使用标准库规范即利用容器
void print(const int *beg, const int *end)
{
	while (beg!= end)
		cout << *beg++ << endl;
}//标准库函数begin()和end();


//3.显式传递一个数组大小的形参
void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size;i++)
	{
		cout << ia[i] << endl;

	}
}
void print(int (&arr)[10])//&arr左右的括号必不可少；不加括号是指将arr声明为引用的数组;
//加后为具有10个整型数组的引用
{
	for (auto elem:arr)
	{
		cout << elem << endl;
	}
}

void print(int (*matrix)[10],int Rowsize);
//int (*matrix)[10], int Rowsize);具有是个整形的数组指针
//int *matrix[10]不同，10个指针组成的数组；


initializer_list<int>lii;
initializer_list<string>ls;
void error_msg(initializer_list<string> li)
{
	for (auto beg = li.begin(); beg != li.end();++beg)
	{
		cout<<*beg<<endl;//少了string头文件
	}
}//若向initializer_list形参中传递一个值的序列必须放在一对花括号中；

//void error_msg(ErrCode e, initializer_list<string>li);ErrCode 可能有个这个异常类；
//{
//	cout << e.msg() << ":";
//	for (const auto &elem : li)
//		cout << elem << " ";
//	cout << endl;
//}
void foo(...);
void foo(int ,int, ...);//parm_list 参数列表
void swap(int &v1, int&v2)
{
	if (v1 == v2)
		return;
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	//return 0；错误，产生
}//交换函数；

bool str_subrange(const string &s1, const string &s2)
{
	if (s1.size() == s2.size())
		return s1 == s2;
	auto size = (s1.size() < s2.size() ? s1.size() : s2.size());
	for (decltype(size) i = 0; i != size; ++i)
	{
		if (s1[i] != s2[i])
			return true;//return 直接错误
		//warning C4715: “str_subrange”: 不是所有的控件路径都返回值此处应该有return
		//在含有return的for循环语句外面也应该有一条return；如果没有则该程序错误，很多编译器无法识别这个错误;
	}
	return true;//Vs2013的编译器可以识别这个错误
}
	string make_plural(size_t ctr,const string &word,const string&ending)
	{
		return (ctr > 1) ? word + ending : word;//返回值 返回一个临时对象
	}
	vector<string>process(string expected,string actual)
	{
		if (expected.empty())//花括号返回值是c++11中新添加的属性测试
		{
			return{};
		}
		else if (expected == actual)
			return{ "functionX", "OKEY" };
		else
			return{ "Function", expected, actual };
	}

	int  factorial(int val)//阶乘的递归算法
	{
		if (val > 1)
			return factorial(val - 1)*val;
		return 1;
	}
	int print(vector<int >&li,int i=0)//递归输出vector中的值
	{
		
		if (i==li.size())
			return 0;
		cout << li[i++] <<" ";
		print(li, i);
	
	}
	auto  function(int i)->int(*)[10];//尾随的返回类型需要auto
	//使用decltype
	int odd[] = { 1, 3, 5, 7, 9 };
	int even[] = { 2, 5, 346, 7, 3};
	decltype(odd)*arrptr(int i)//指向一个指向数组的指针而且两个数组维度必须相同
	{
		return (i % 2) ? &odd : &even;
	}
	//////////////////////////////////////////////////////////////////////////
	//函数重载
	//////////////////////////////////////////////////////////////////////////
	//main函数不能重载
	
	
	//Record  lookup(const phone&);事实证明，Record是别名，让读者轻易知道什么意思，属于自然描述语言，伪代码
	//Screen&moveHome();同上
	//////////////////////////////////////////////////////////////////////////
	//const_cast在重载中最有用
	const string &shorterString(const string &s1, const string &s2)
	{
		cout << "调用 const string &" << endl;
		return s1.size() <= s2.size() ? s1 : s2;//返回类型都是引用
	}
	string &shorterString(string &s1, string &s2)
	{
		cout << "调用 string &2" << endl;
		auto &r = shorterString((const_cast<const string&>(s1)), (const_cast<const string &>(s2)));
		return const_cast<string &>(r);//为了安全
	}
	//////////////////////////////////////////////////////////////////////////
	//特殊用途语言特性
	//////////////////////////////////////////////////////////////////////////
	typedef string::size_type sz;
	string screen(sz ht = 24, sz wid = 80, char background = ' ');
	//string screen(sz ht,sz wid, char background = ' ');//不能修改默认实参，在实参已经声明过的函数中
	string screen(sz ht,sz wid, char background );
//	constexpr int new_sz(){ return 43; };vs2013默认不支持constexpr关键字
	//////////////////////////////////////////////////////////////////////////
	//调试帮助
	//////////////////////////////////////////////////////////////////////////
	//两项预处理宏  assert和NDEBUG;
	void printl(const int ia[], size_t size)
	{
		#ifndef  NDEBUG
		//vs2013做了优化 __FUNCTION__存放函数的名字而不是__FUNC__
		cerr << __FUNCTION__ << "array size is" << size << endl;
		#endif
	}
	//////////////////////////////////////////////////////////////////////////
	///调用重载函数时，应该尽量避免强制类型转换。如果在实际应用中确实需要强制类型转换，这说明我们设计的形参集合不合理。
	//////////////////////////////////////////////////////////////////////////

	//函数指针
	bool lengthCompare(const string &, const string &);
	bool(*pf)(const string &, const string &);//pf是函数指针，指向这个函数的指针。
	bool *plf(const string &, const string &);//返回一个为bool指针的的函数。
	void ff(int *);
	void ff(unsigned int);
	void(*pf1)(unsigned int) = ff;//需要形参类型返回类型精确匹配才可以使用
	void useBigger(const string &s1, const string &s2, bool pf(const string&, const string &));//隐式的将pf转换为函数指针(*pf)
	typedef decltype(lengthCompare) Func2;//decltype 的返回类型为函数类型并不是指针类型。所以函数func这 为函数类型但是在其他函数调用时，编译器会自动将其转换为指针类型；
	typedef bool func1(const string&, const string &);

	//////////////////////////////////////////////////////////////////////////
	typedef decltype(lengthCompare) *Funcp2;//编译器会自动将函数名转换为指针名 funcp 是函数指针类型
	typedef bool *funcp1(const string&, const string &);



int main(int argc,char **argv)
{
	string window;
//	window = screen();//赋值语句不能放在主函数外面
//	window = screen(66);//必须要有函数实现体
//	window = screen(66, 77);//后续默认实参填补空余位置，默认只能省略尾部实参，头部不可以直接省略填写尾部形参
//	window = screen(88, 99, 'f');
	const string s1 = "hello";
	const string s2 = "world";
	string s3, s4;

	//cin >> s3 >> s4;
	shorterString(s1, s2);
	shorterString(s3, s4);
	vector<int>ceshi = { 1, 2, 3, 4, 5, 6, 6, 7, 5};
	print(ceshi);
	string s = "afadgsd";
	string ls1 = "asfdfgxbfghe";
	process(s,ls1);
	
	int j[] = { 2, 1, 3 };
	printl(j, 3);
	print(begin(j), end(j));//2
	print(j, end(j) - begin(j));//3
	
//	is_enpty(j);
	//return 0;
	system("pause");
}