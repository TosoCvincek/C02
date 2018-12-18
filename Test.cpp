#include "Test.h"
#include "Zoznam.h"
#include "Uzol.h"
bool Test::Run()
{
	Zoznam list;
	list.sort("cislo.txt", Porovnaj);
	list.Uloz("cisloSorted.txt");
	list.Uloz("");
	return true;
}
