#ifndef _STRPOINT
#define _STRPOINT
#include <memory>
#include <vector>
#include<string>
#include<stdexcept>
#include<initializer_list>
using namespace std;
class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	~StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size()const { return data->size(); }
	bool empty()const { return data->empty(); }
	void pop_back();
	void push_back(const string &t) { data->push_back(t); }
	const string&front()const;
	const string &back()const;
	std::string&front();
	std::string&back();
private:
	std::shared_ptr<std::vector<std::string>>data;
	void check(size_type i, const std::string &msg)const;
};



#endif
