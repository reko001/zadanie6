#pragma once
#include <iostream>
#include "Kapitan.h"

class Statek
{
protected:
	Kapitan m_kapitan;
private:
	std::string m_nazwa;
	int m_zaloga;
	int* m_tab_i;
	int m_id;
	static int m_obecne_id;
	void set_id();
	friend std::ostream& operator <<(std::ostream&, const Statek&);
	int m_racje = 0;
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
	virtual ~Statek();
	Statek(const Statek&);
	void werbunek(int);
	static int static_get_id();
	int get_id();
	virtual void oblicz_zywnosc();
	virtual void oblicz_zywnosc(bool);
	void set_racje(int);
	int get_racje() const;
};

