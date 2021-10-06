#include <iostream>
#include "Author.h"
#include "Book.h"

using namespace std;
using namespace bookSpace;
using namespace authorSpace;

int main() {

	setlocale(LC_ALL, "rus");

	
	American amer;
	amer.SetAuthorName("Эрнесст Хэмингуэй");
	amer.SetAuthorYear(1899);

	Book book;
	book.SetBookName("Старик и море");
	book.SetBookYear(1952);
	bookSpace::SetAuthorName(book, amer.GetAuthorName());
	authorSpace::SetBookName(amer, book.GetBookName());
	bookSpace::PrintInfo(book);
	amer.PrintInfo();

	cout << "---------------------------------" << endl;
	British br;
	br.SetAuthorName("Джейн Остен");
	br.SetAuthorYear(1775);
	Book book1;
	book1.SetBookName("Гордость и предубеждение");
	book1.SetBookYear(1813);
	bookSpace::SetAuthorName(book1, br.GetAuthorName());
	authorSpace::SetBookName(br, book1.GetBookName());
	br.PrintInfo();
	bookSpace::PrintInfo(book1);


	cout << bookSpace::GetAuthorName(book1);
	cout << "---------------------------------" << endl;
	British br1;
	br1.PrintInfo();

	return 0;
}