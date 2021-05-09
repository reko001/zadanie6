#include "Statek.h"

int	Statek::m_obecne_id = 0;

int Statek::get_zaloga() const{
	return m_zaloga;
}

void Statek::set_zaloga(int zaloga) {
	m_zaloga = zaloga;
}

Kapitan Statek::get_kapitan() const {
	return m_kapitan;
}

void Statek::set_kapitan(Kapitan kapitan) {
	m_kapitan = kapitan;
}

std::string Statek::get_nazwa() const {
	return m_nazwa;
}

void Statek::set_nazwa(std::string nazwa) {
	m_nazwa = nazwa;
}

Statek::Statek() : m_kapitan("John", "Sheridan", 10, false), m_nazwa("White Star"), m_zaloga(25) {
	m_tab_i = new int[3];
	set_tab_i();
	set_id();
}

Statek::Statek(Kapitan kapitan, std::string nazwa, int zaloga) {
	m_kapitan = kapitan;
	m_nazwa = nazwa;
	m_zaloga = zaloga;
	m_tab_i = new int[3];
	set_tab_i();
	set_id();
}

Statek::Statek(int zaloga) : m_kapitan{ "Marcus", "Cole", 0 ,false }, m_zaloga(zaloga) {
	m_nazwa = "White Star";
	m_tab_i = new int[3];
	set_tab_i();
	set_id();
}

Statek::~Statek() {
	delete m_tab_i;
	std::cout << "Zostal wywolany destruktor klasy Statek." << std::endl;
}

void Statek::set_tab_i() {
	m_tab_i[0] = 1;
	m_tab_i[1] = 2;
	m_tab_i[2] = 3;
}

Statek::Statek(const Statek& inny): m_kapitan(inny.m_kapitan), m_nazwa(inny.m_nazwa), m_zaloga(inny.m_zaloga) {
	m_tab_i = new int[3];
	set_tab_i();
	set_id();
}

void Statek::werbunek(int liczba) {
	m_zaloga += liczba;
}

void Statek::set_id() {
	m_id = Statek::m_obecne_id++;
}

int Statek::static_get_id() {
	return m_obecne_id;
}

int Statek::get_id() {
	return m_id;
}

std::ostream& operator<<(std::ostream& strumien, const Statek& statek) {
	strumien << "Kapitan: " << statek.m_kapitan << ", nazwa: " << statek.m_nazwa << ", liczba zalogi: "
		<< statek.get_zaloga() << ", Identyfikator: " << statek.m_id;
	return strumien;
}

void Statek::oblicz_zywnosc() {
	m_racje = 3 * m_zaloga;
}

void Statek::oblicz_zywnosc(bool desery) {
	if (desery) {
		m_racje = 4 * m_zaloga;
		return;
	}
	m_racje = 3 * m_zaloga;
}

void Statek::set_racje(int racje) {
	m_racje = racje;
}

int Statek::get_racje() const {
	return m_racje;
}