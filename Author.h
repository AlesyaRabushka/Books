#pragma once
#include <iostream>
#include "Book.h"

using namespace std;

class Author {
private:
	string name;
	int age;
	string book;

public:
	Author() {};
	Author(string);
	Author(string, int);
	Author(string, int, string);

	virtual void PrintAuthorInfo() {
		cout << "Имя автора: " << GetName() << endl;
		cout << "Возраст: " << GetAge() << endl;
		cout << "Книга: " << GetBook() << endl;
	};
	string GetName() {
		return name;
	}
	int GetAge() {
		return age;
	}
	string GetBook() {
		return book;
	}
	void SetName(string n) {
		name = n;
	}
	void SetAge(int a) {
		age = a;
	}
	void SetBook(string book) {
		this->book = book;
	}
};

Author::Author(string) {
	this->name = name;
}

Author::Author(string, int) {
	this->name = name;
	this->age = age;
}

Author::Author(string name, int age, string book) {
	this->name = name;
	this->age = age;
	this->book = book;
}



class British :public Author {
private:
	string nation = "British";

public:
	British(string, int, string);
	British(string, int);
	British(string);
	British() {};

	void PrintAuthorInfo() override {
		Author::PrintAuthorInfo();
		cout << "Национальность: " << nation << endl;
	}

	string GetNation() {
		return nation;
	}
};

British::British(string name) {
	British::SetName(name);
}

British::British(string name, int age) {
	British::SetName(name);
	British::SetAge(age);
}

British::British(string name, int age, string book) {
	British::SetName(name);
	British::SetAge(age);
	British::SetBook(book);
}






class American :private Author {
private:
	string nation = "American";
public:
	American() {};
	American(string);
	American(string, int);
	American(string, int, string);

	void PrintAuthorInfo() override {
		Author::PrintAuthorInfo();
		cout << "Национальность: " << GetNation() << endl;
	}
	string GetNation() {
		return nation;
	}

	string GetName() {
		return Author::GetName();
	}
	int GetAge() {
		return Author::GetAge();
	}
	string GetBook() {
		return Author::GetBook();
	}
	void SetName(string name) {
		Author::SetName(name);
	}
	void SetAge(int age) {
		Author::SetAge(age);
	}
	void SetBook(string book) {
		Author::SetBook(book);
	}
};

American::American(string name) {
	American::SetName(name);
}

American::American(string name, int age) {
	American::SetName(name);
	American::SetAge(age);
}

American::American(string name, int age, string book) {
	American::SetName(name);
	American::SetAge(age);
	American::SetBook(book);
}




class Russian :protected Author {
private:
	string nation = "Russian";
public:
	Russian() {};
	Russian(string);
	Russian(string, int);
	Russian(string, int, string);

	void PrintAuthorInfo() override {
		Author::PrintAuthorInfo();
		cout << "Национальность: " << nation << endl;
	}

	string GetNation() {
		return nation;
	}


};

Russian::Russian(string name) {
	Russian::SetName(name);
}

Russian::Russian(string name, int age) {
	Russian::SetName(name);
	Russian::SetAge(age);
}

Russian::Russian(string name, int age, string book) {
	Russian::SetName(name);
	Russian::SetAge(age);
	Russian::SetBook(book);
}