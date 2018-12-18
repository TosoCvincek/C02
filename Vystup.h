#pragma once
#include <cstdio>
#include "Uzol.h"
struct Vystup
{
	FILE *fpopisovac = nullptr;
	Vystup(const char *menoSuboru);
	void ZapisCislo(TYP_HODNOTA cislo);
	~Vystup();
};


