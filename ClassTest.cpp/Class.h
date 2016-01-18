#ifndef SALAS_DATE
#define SALAS_DATE
#include <iostream>
#include <string>
#include "Window_mgr.h"

class Screen;
class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
	Window_mgr() = default;
	//////////////////////////////////////////////////////////////////////////
	//1>f:\nowworkcome\c++primer\classtest.cpp\class.h(37): error C2027: 使用了未定义类型“Window_mgr”
	//1 > f:\nowworkcome\c++primer\classtest.cpp\class.h(36) : 参见“Window_mgr”的声明
	//1 > f:\nowworkcome\c++primer\classtest.cpp\class.h(37) : error C2061 : 语法错误 : 标识符“ScreenIndex”
	//1 > Class.cpp                                                       //错误竟然无法避免；我竟无言以对需要放在同一文件里面
	//////////////////////////////////////////////////////////////////////////
private:
	std::vector<Screen>screens{};// Screen(24, 80, ' ')在这里不能放在这里会有语法错误，静态成员初始化须在构造函数里面初始化

};
class Person
{
	private:
		mutable int a;
//		static constexpr double data_db = 1;
		std::string Pername;	
		std::string PerAddr;
	public:	
		Person() = default;
		Person(const std::string setname, const std::string setaddr) :Pername(setname), PerAddr(setaddr) {}
		std::string getname() const { return Pername; }
		std::string getAddr() const { return  this ->PerAddr; }//隐式this显式替换
		inline std::string setPerName(std::string setname) { Pername = setname; }
		inline void showPerDate() { std::cout << Pername << PerAddr; }
		friend int readline(const std::string name);
		friend std::istream &read(std::istream&, Person&);
		friend std::ostream &write(std::ostream&, Person&);//友元类和友元函数会破坏类的封装性;
};
	int readline(const std::string name);
	std::istream &read(std::istream&, Person&);
	std::ostream &write(std::ostream&, Person&);
class Perfriend
{
private:
	int age;
	int height;
	int money;
public:
	Perfriend(int Age, int Height, int Mon) :age(Age), money(age) {}//虽然不会有什么警告信息出现但是还是会出现一些错误型的错误

};
 

class Screen
{
	friend class Window_mgr;
	friend void Window_mgr::clear(ScreenIndex i);
	public:
		
		using pos = std::string::size_type;//类型别名
		typedef std::string::size_type pos;
		Screen&set(char);
		Screen&set(pos, pos, char);
		Screen() = default;
		Screen(pos ht, pos wd, char c) :height(ht) ,weight(wd), contents(ht *wd, c) {}//读取光标处的字符
		char get()const { return contents[cursor]; }	//隐式内联
		inline char get(pos ht, pos wd)const;			//显式内联
		Screen &move(pos r, pos s);						//能在之后被设为内联函数
		Screen &display(std::ostream &os) 
		{
			do_display(os);
			return *this;
		}
		const Screen &display(std::ostream &os)const
		{
			do_display(os);
			return *this;
		}
	private:
		pos cursor = 0;
		pos height = 0, weight = 0;
		std::string contents;
		void do_display(std::ostream &os)const
		{
			os << contents;
		}
};
typedef double Money;
class Accoount
{
public:
	Money blance() { return bal;}
private:
	//typedef double Money;//错误，不能重新定义Money。虽然在vs2013中编译通过，但是韩式不够严谨的代码。
	Money bal;
}; 
//int weight;
//class Glass
//{
//public:
//	typedef std::string :: size_type poos;
//	void setheight(poos);
//	poos weight = 0;
//
//
//};
//Glass::poos verify(Glass::poos);
//void Glass::setheight(poos var)
//{
//	//var 参数
//	//
//	this->weight = verify(var);
//};



//////////////////////////////////////////////////////////////////////////
//委托构造函数
//////////////////////////////////////////////////////////////////////////
class Sales_date
{
public:
	Sales_date(std::string s,unsigned cnt,double pries):
		bookNo(s), unit_sold(cnt), revenue(cnt*pries) { }
	Sales_date() :Sales_date(" ", 0, 0);
	Sales_date(std::string s) :Sales_date(s, 0, 0);
	Sales_date(std::istream &is) :Sales_date() { read(is, *this); }//委托构造函数，在已有构造函数的基础上使用此构造函数，自己本身也算作一个构造函数u
private:
	std::string bookNo;
	unsigned unit_sold;
	double revenue;
};
#endif
