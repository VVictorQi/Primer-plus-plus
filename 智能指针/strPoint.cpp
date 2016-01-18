#include"strPoint.h"

StrBlob::StrBlob():data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}
void StrBlob::check(size_type i, const std::string &msg)const
{
	if (i >= data->size())
		throw out_of_range(msg);
}
string&StrBlob::front()
{
	check(0, "front on empty StrBlog");
	return data->front();
}
string&StrBlob::back()
{
	check(0, "back on empty StrBlog");
	return data->back();
}
const string&StrBlob::front() const
 {
	check(0, "front on empty StrBlog");
	return data->front();
}
const string&StrBlob::back() const
{
	check(0, "back on empty StrBlog");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlog");
	return data->pop_back();

}