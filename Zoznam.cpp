#include "Zoznam.h"
#include "Vstup.h"
#include "Vystup.h"
void Zoznam::sort(const char * menoSuboru, PorovnajPtr porovnavaciaFunkcia)
{
	Vstup citac(menoSuboru);
	Uzol *aktualny, *predchadzajuci; 
	TYP_HODNOTA cislo = citac.CitajCislo();
		while (cislo != NEPLATNAHODNOTA) {
			if (start == nullptr) {
				start = new Uzol(cislo, nullptr);
			}
			else {
				predchadzajuci = nullptr;
				aktualny = start;
				while (aktualny != nullptr && porovnavaciaFunkcia(&cislo, &aktualny->hodnota) > 0) {
					predchadzajuci = aktualny;
					aktualny = aktualny->dalsi;
				}
				aktualny = new Uzol(cislo, aktualny);
				if (predchadzajuci == nullptr) {
					start = aktualny;
				}
				else {
					predchadzajuci->dalsi = aktualny;
				}
				cislo = citac.CitajCislo();
			}
		}
	}
}

Zoznam::Zoznam()
{
}


Zoznam::~Zoznam() {
	Vymaz(start);
}

void Zoznam::Vymaz(Uzol *uzol)
{
	if (uzol->dalsi != nul
		lptr) {
		Vymaz(uzol->dalsi);
		delete uzol;
	}
}
