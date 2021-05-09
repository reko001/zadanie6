#include <iostream>
#include "TransportowiecBojowy.h"

int main() {
	Statek statek1;
	Kapitan kapitan1("Roger","Gol D.", 15, false);
	std::cout << kapitan1 << std::endl;
	Statek statek2(kapitan1,"Oro Jackson", 30);
	std::cout << statek1 << std::endl;
	std::cout << statek2 << std::endl;
	statek2.oblicz_zywnosc();
	std::cout << statek2.get_nazwa() << " - racje: " << statek2.get_racje() << std::endl;
	statek2.werbunek(10);
	statek2.oblicz_zywnosc();
	std::cout << statek2.get_nazwa() << " - racje: " << statek2.get_racje() << std::endl;
	Statek statek3(statek2);
	std::cout << statek3 << std::endl;
	StatekPasazerski sp1;
	std::cout << sp1 << std::endl;
	sp1.oblicz_zywnosc();
	std::cout << sp1.get_nazwa() << " - racje: " << sp1.get_racje() << std::endl;
	sp1.set_pasazerowie(200);
	sp1.oblicz_zywnosc(false);
	std::cout << sp1.get_nazwa() << " - racje: " << sp1.get_racje() << std::endl;
	Mysliwiec mysliwiec1;
	std::cout << mysliwiec1 << std::endl;
	TransportowiecBojowy tb1;
	std::cout <<tb1 << std::endl;
	std::cout << "tb1 - " << tb1.get_wiezyczki() << " wiezyczek" << std::endl;
	tb1.werbunek(10);
	tb1.set_pasazerowie(120);
	std::cout << "tb1 - " << tb1.get_pasazerowie() << " pasazerow" << std::endl;
	std::cout << "tb1 - " << tb1.get_zaloga() << " zalogantow" << std::endl;
	tb1.oblicz_zywnosc(true);
	std::cout << tb1.get_nazwa() << " - racje: " << tb1.Mysliwiec::get_racje() << std::endl;
}