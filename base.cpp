#include "base.h"


Base::Base(int cap):capacity(cap)
{
}


Base::~Base(void)
{
}

//set methods
void Base::setiridium(int quan)
{iridium += quan;}

void Base::setpalladium(int quan)
{palladium += quan;}

void Base::setplatinum(int quan)
{platinum += quan;}

void Base::setcapacity(int cap)
{capacity=cap;}

//get methods
int Base::getcapacity()
{return capacity;}
