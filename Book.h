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
	Book() {
		book_name = "��� ����������";
		book_year = 0;
		book_author = "��� ����������";
	};
	Book(string);
	Book(string, int, string);
	

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
	//virtual string GetBookGenre() = 0;
	
};

Book::Book(string name) {
	book_name = name;
}

Book::Book(string name, int year,string author) {
	SetBookName(name);
	SetBookYear(year);
	SetBookAuthor(author);
}


class Romantic: virtual public Book {

public:
	Romantic() {
		SetBookName("��� ����������");
		SetBookYear(0);
		SetBookAuthor("��� ����������");
	};
	Romantic(string);
	Romantic(string, int, string);

	void SetBookName(string name) {
		Book::SetBookName(name);
	}
	string GetBookName() {
		return Book::GetBookName();
	}
	void SetBookYear(int year) {
		Book::SetBookYear(year);
	}
	int GetBookYear() {
		return Book::GetBookYear();
	}
	void SetBookAuthor(string author) {
		Book::SetBookAuthor(author);
	}
	string GetBookAuthor() {
		return Book::GetBookAuthor();
	}
};

Romantic::Romantic(string name) {
	Book::SetBookName(name);
}

class Detective : virtual public Book {

};

class Romatic_Detective : public Romantic, public Detective {

};



//������������ ���� ��� ������ � �������

namespace bookSpace {
	//����� ���������� � ����� �� �����
	void PrintInfo(Book book) {
		cout << "�������� �����: " << book.GetBookName() << endl;
		cout << "��� ������: " << book.GetBookAuthor() << endl;
		cout << "��� �������: " << book.GetBookYear() << endl;
	}

	//��������� ����� ������
	void SetAuthorName(Book& book, string a) {
		book.SetBookAuthor(a);
	}

	//����������� ����� ������
	string GetAuthorName(Book book) {
		return book.GetBookAuthor();
	}
}
