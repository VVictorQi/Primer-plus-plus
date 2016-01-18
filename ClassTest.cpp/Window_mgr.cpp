#include "Window_mgr.h"

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std:: string(s.height*s.weight, ' ');
}