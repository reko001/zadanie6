#pragma once
#include "Statek.h"
class Mysliwiec : virtual public Statek
{
private:
	int liczba_wiezyczek = 1;
public:
	int get_wiezyczki() const { return liczba_wiezyczek; };
};

