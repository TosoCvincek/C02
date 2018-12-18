#include "Vstup.h"

Vstup::Vstup(const char * menoSuboru)
{
	if (menoSuboru != nullptr && menoSuboru[0]!= '\0') {
	//if (menoSuboru != nullptr && *menoSuboru!= '\0') {
	//if(menoSuboru && *menoSuboru)
		fpopisovac = fopen(menoSuboru, "rt");
	}
}

Vstup::~Vstup()
{
	if (fpopisovac) {
		fclose(fpopisovac);
	}
}

TYP_HODNOTA Vstup::CitajCislo()
{
	if (fpopisovac) {
		if (!feof(fpopisovac)) {
			TYP_HODNOTA cislo;
			fscanf(fpopisovac, "%d", &cislo);
			return cislo;
		}
	}
	return NEPLATNAHODNOTA;
}
