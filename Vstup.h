#pragma once
#include <cstdio>
#include "Uzol.h"
struct Vstup
{
	FILE *fpopisovac = nullptr;
	Vstup(const char *menoSuboru);
	~Vstup();

	TYP_HODNOTA CitajCislo();
};

