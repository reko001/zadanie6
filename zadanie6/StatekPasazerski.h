#pragma once
#include "Statek.h"
class StatekPasazerski : virtual public Statek {
private:
	int m_pasazerowie = 0;
	friend std::ostream& operator<<(std::ostream&, const StatekPasazerski&);
public:
	int get_pasazerowie() const;
	void set_pasazerowie(int);
	int liczba_osob() const;
	void oblicz_zywnosc() override;
	void oblicz_zywnosc(bool);
};

