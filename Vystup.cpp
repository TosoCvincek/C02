#include "Vystup.h"

Vystup::Vystup(const char * menoSuboru)
{
	if (menoSuboru != nullptr && menoSuboru[0] != '\0') {
		//if (menoSuboru != nullptr && *menoSuboru!= '\0') {
		//if(menoSuboru && *menoSuboru)
		fpopisovac = fopen(menoSuboru, "rt");
	}
}

Vystup::~Vystup()
{
	if (fpopisovac) {
		fclose(fpopisovac);
	}
}

void Vystup::ZapisCislo(TYP_HODNOTA cislo) {
	if (fpopisovac) {
		if (!feof(fpopisovac)) {
			TYP_HODNOTA cislo;
			fscanf(fpopisovac, "%d", &cislo);
			return cislo;
		}
	}
}
