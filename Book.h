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
	/*Book() {
		book_name = "��� ����������";
		book_year = 0;
		book_author = "��� ����������";
	};
	Book(string);
	Book(string, int, string);*/
	

	/*virtual void SetBookName(string name) {
		book_name = name;
	}
	virtual string GetBookName() {
		return book_name;
	}
	virtual void SetBookYear(int year) {
		book_year = year;
	}
	virtual int GetBookYear() {
		return book_year;
	}
	virtual void SetBookAuthor(string author) {
		book_author = author;
	}
	virtual string GetBookAuthor() {
		return book_author;
	}
	virtual string GetBookGenre() = 0;*/

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
	virtual string GetBookGenre() = 0;
	
};
/*Book::Book(string name) {
	book_name = name;
}

Book::Book(string name, int year,string author) {
	SetBookName(name);
	SetBookYear(year);
	SetBookAuthor(author);
}*/


class Romantic: public virtual Book {

public:
	Romantic() {
		SetBookName("��� ����������");
		SetBookYear(0);
		SetBookAuthor("��� ����������");
	};
	Romantic(string);
	Romantic(string, int, string);

	string GetBookGenre() override{
		return "���������";
	}
};

Romantic::Romantic(string name) {
	SetBookName(name);
}

Romantic::Romantic(string name, int year, string author) {
	SetBookName(name);
	SetBookYear(year);
	SetBookAuthor(author);
}





class Detective : public virtual Book {
public:
	Detective() {
		SetBookName("��� ����������");
		SetBookYear(0);
		SetBookAuthor("��� ����������");
	};
	Detective(string);
	Detective(string, int, string);

	string GetBookGenre() override {
		return "��������";
	}
};

Detective::Detective(string name) {
	SetBookName(name);
}

Detective::Detective(string name, int year, string author) {
	SetBookName(name);
	SetBookYear(year);
	SetBookAuthor(author);
}





class Romatic_Detective : public Romantic, public Detective {
public:
	string GetBookGenre() {
		return "������������� ��������";
	}
};



//������������ ���� ��� ������ � �������

namespace bookSpace {
	//����� ���������� � ����� �� �����
	void PrintInfo(Book& book) {//��������� �� ������� ����� ����� ��������� ������ �� ������ ������ ����������!!
		cout << "�������� �����: " << book.GetBookName() << endl;
		cout << "��� ������: " << book.GetBookAuthor() << endl;
		cout << "��� �������: " << book.GetBookYear() << endl;
		cout << "����: " << book.GetBookGenre() << endl;
	}

	//��������� ����� ������
	void SetAuthorName(Book& book, string a) {
		book.SetBookAuthor(a);
	}

	//����������� ����� ������
	string GetAuthorName(Book* book) {
		return (*book).GetBookAuthor();
	}
}
