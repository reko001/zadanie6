#pragma once
#include <iostream>
class Kapitan
{
private:
	std::string m_imie;
	std::string m_nazwisko;
	int m_lata_sluzby;
	bool m_na_pokladzie;
	friend std::ostream& operator<<(std::ostream&, const Kapitan&);
public:
	Kapitan();
	Kapitan(std::string, std::string, int, bool);
	~Kapitan();
	std::string get_imie() const;
	void set_imie(std::string);
	std::string get_nazwisko() const;
	void set_nazwisko(std::string);
	int get_lata_sluzby() const;
	void set_lata_sluzby(int);
	bool get_na_pokladzie() const;
	void set_na_pokladzie(bool);
};

