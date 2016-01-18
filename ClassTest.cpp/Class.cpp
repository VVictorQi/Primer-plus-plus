#include "Class.h"
#include <iostream>
using namespace std;
inline Screen &Screen::move(pos r, pos s)
{
	pos row = r*weight;
	cursor = row + s;
	return *this;

}
char Screen::get(pos r, pos c)const
{
	pos row = r*weight;
	return contents[cursor + c];
}




int main(int argc, char **argv)
{
	Screen myscreen(5, 5, ' ');
	Screen::pos ht = 24, wd = 80;
	Screen scr(ht, wd, ' ');
	Screen *p = &scr;
	char c = scr.get();
	c = p->get();
	myscreen.move(4, 0).get();
	system("pause");
}