#include "Uzol.h"

Uzol::Uzol(TYP_HODNOTA phodnota, Uzol *pdalsi)
{
	hodnota = phodnota;
	dalsi = pdalsi;
}

int Porovnaj(void * hod1, void * hod2)
{
	TYP_HODNOTA *ph1 = (TYP_HODNOTA*)hod1;
	TYP_HODNOTA *ph2 = (TYP_HODNOTA*)hod2;
	return *ph1 - *ph2;
}
