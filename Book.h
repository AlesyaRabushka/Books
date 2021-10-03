#pragma once
#include <iostream>
#include "Author.h"

using namespace std;

class Book {
private:
	string book_name;
	int book_year;
	 string book_author;

public:
	Book(string, int, string);
	Book();
	Book(string);
	

	void SetBookName(string name) {
		book_name = name;
	}
	string GetBookName() {
		return book_name;
	}
	void SetBookYear(int year) {
		book_year = year;
	}
	int GetBookYear() {
		return book_year;
	}
	void SetBookAuthor(string author) {
		book_author = author;
	}
	string GetBookAuthor() {
		return book_author;
	}
};

Book::Book(string name) {
	book_name = name;
}

Book::Book(string name, int year,string author) {
	SetBookName(name);
	SetBookYear(year);
	SetBookAuthor(author);
}