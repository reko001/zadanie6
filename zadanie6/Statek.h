#pragma once
#include <iostream>
#include "Kapitan.h"

class Statek
{
private:
	Kapitan m_kapitan;
	std::string m_nazwa;
	int m_zaloga;
public:
	int get_zaloga() const;
	void set_zaloga(int zaloga);
	Statek();
	Statek(Kapitan, std::string, int);
	Statek(int);
	~Statek();
};

