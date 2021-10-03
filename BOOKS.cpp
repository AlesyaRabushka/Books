#include <iostream>
#include "Author.h"
#include "Book.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	British brit("Томас Харди");
	brit.SetAge(96);
	brit.PrintAuthorInfo();

	American am("Джефри", 45, "Что-то");
	am.PrintAuthorInfo();
	return 0;
}