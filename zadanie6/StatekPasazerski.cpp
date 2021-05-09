#include "StatekPasazerski.h"

int StatekPasazerski::get_pasazerowie() const {
	return m_pasazerowie;
}

void StatekPasazerski::set_pasazerowie(int pasazerowie) {
	m_pasazerowie = pasazerowie;
}

int StatekPasazerski::liczba_osob() const {
	return m_pasazerowie + get_zaloga();
}

std::ostream& operator<<(std::ostream& strumien, const StatekPasazerski& statek) {
	strumien << "Kapitan: " << statek.m_kapitan << ", nazwa: " << statek.get_nazwa() << ", liczba zalogi: "
		<< statek.get_zaloga() << " Pasazerowie: " << statek.m_pasazerowie;
	return strumien;
}

void StatekPasazerski::oblicz_zywnosc() {
	set_racje(3 * (get_zaloga() + m_pasazerowie));
}

void StatekPasazerski::oblicz_zywnosc(bool desery) {
	if (desery) {
		set_racje(4 * (get_zaloga() + m_pasazerowie));
		return;
	}
	set_racje(3 * (get_zaloga() + m_pasazerowie));
}
