#include "Kapitan.h"

Kapitan::Kapitan(std::string imie, std::string nazwisko, int lata_sluzby, bool na_pokladzie) {
	m_imie = imie;
	m_nazwisko = nazwisko;
	m_lata_sluzby = lata_sluzby;
	m_na_pokladzie = na_pokladzie;
}

Kapitan::Kapitan() : m_imie("John"), m_nazwisko("Sheridan"), m_lata_sluzby(10), m_na_pokladzie(false) {};

Kapitan::~Kapitan() {
	std::cout << "Zostal wywolany destruktor klasy Kapitan." << std::endl;
}

std::string Kapitan::get_imie() const {
	return m_imie;
}

void Kapitan::set_imie(std::string imie) {
	m_imie = imie;
}

std::string Kapitan::get_nazwisko() const {
	return m_nazwisko;
}

void Kapitan::set_nazwisko(std::string nazwisko) {
	m_nazwisko = nazwisko;
}

int Kapitan::get_lata_sluzby() const {
	return m_lata_sluzby;
}

void Kapitan::set_lata_sluzby(int lata_sluzby) {
	m_lata_sluzby = lata_sluzby;
}

bool Kapitan::get_na_pokladzie() const {
	return m_na_pokladzie;
}

void Kapitan::set_na_pokladzie(bool na_pokladzie) {
	m_na_pokladzie = na_pokladzie;
}

std::ostream& operator<<(std::ostream& strumien, const Kapitan& kapitan) {
	strumien << "Imie: " << kapitan.m_imie << ", nazwisko: " << kapitan.m_nazwisko << ", lata sluzby: " << kapitan.m_lata_sluzby;
	return strumien;
}