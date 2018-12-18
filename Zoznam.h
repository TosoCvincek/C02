#pragma once
#include "Uzol.h"
typedef int(*PorovnajPtr)(void *hodnota1, void *hodnota2);
struct Zoznam
{
	Uzol *start = nullptr;
	void sort(const char *menoSuboru, PorovnajPtr porovnavaciaFunkcia);
	void Uloz(const char *cislo);
	Zoznam();
	~Zoznam();
	void Vymaz(Uzol *uzol);
}

