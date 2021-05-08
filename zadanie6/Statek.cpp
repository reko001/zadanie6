#include "Statek.h"

int Statek::get_zaloga() const{
	return m_zaloga;
}

void Statek::set_zaloga(int zaloga) {
	m_zaloga = zaloga;
}

Statek::Statek() : m_kapitan("John", "Sheridan", 10, false), m_nazwa("White Star"), m_zaloga(25) {};

Statek::Statek(Kapitan kapitan, std::string nazwa, int zaloga) {
	m_kapitan = kapitan;
	m_nazwa = nazwa;
	m_zaloga = zaloga;
}

Statek::Statek(int zaloga) : m_kapitan{ "Marcus", "Cole", 0 ,false }, m_zaloga(zaloga) {
	m_nazwa = "White Star";
}

Statek::~Statek() {
	std::cout << "Zostal wywolany destruktor klasy Statek." << std::endl;
}