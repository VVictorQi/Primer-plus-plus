#include "ScreenMutable.h"
#include<iostream>
using namespace std;
void ScreenMutable::some_member()const
{
	++access_ctr;
}