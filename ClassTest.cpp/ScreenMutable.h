#ifndef SCREENMUTABLE
#define SCREENMUTABLE
class ScreenMutable
{
public:	void some_member()const;
private:  mutable size_t access_ctr;

};
#endif