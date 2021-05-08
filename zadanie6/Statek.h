#pragma once
#include <iostream>
#include "Kapitan.h"

class Statek
{
private:
	Kapitan m_kapitan;
	std::string m_nazwa;
	int m_zaloga;
	int* m_tab_i;
	int m_id;
	static int m_obecne_id;
	void set_id();
	friend std::ostream& operator <<(std::ostream&, const Statek&);
public:
	int get_zaloga() const;
	void set_zaloga(int);
	Kapitan get_kapitan() const;
	void set_kapitan(Kapitan);
	std::string get_nazwa() const;
	void set_nazwa(std::string);
	void set_tab_i();
	Statek();
	Statek(Kapitan, std::string, int);
	Statek(int);
	~Statek();
	Statek(const Statek&);
	void werbunek(int);
	static int static_get_id();
	int get_id();
};

