#pragma once
typedef int TYP_HODNOTA;
const TYP_HODNOTA NEPLATNAHODNOTA = 0; //vyhoda, �e sta�� zmeni� na jednom mieste, uklada sa do statickej pamati, prekladac si ju pamata
int Porovnaj(void *hod1, void *hod2);
struct Uzol
{
	TYP_HODNOTA hodnota = NEPLATNAHODNOTA;
	Uzol *dalsi = nullptr; // m��e by� aj v kon�truktore
	Uzol(TYP_HODNOTA phodnota, Uzol *pdalsi);
};

