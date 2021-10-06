#include <iostream>
#include "Author.h"
#include "Book.h"

using namespace std;
using namespace bookSpace;
using namespace authorSpace;

int main() {

	setlocale(LC_ALL, "rus");

	
	Romantic rom;
	rom.SetBookName("Гордость и предубеждение");
	rom.SetBookYear(1813);
	British bri;
	bri.SetAuthorName("Джейн Остен");
	bri.SetAuthorYear(1775);
	authorSpace::SetBookName(bri, rom.GetBookName());
	bookSpace::SetAuthorName(rom, bri.GetAuthorName());
	bookSpace::PrintInfo(rom);
	bri.PrintInfo();
	return 0;
}