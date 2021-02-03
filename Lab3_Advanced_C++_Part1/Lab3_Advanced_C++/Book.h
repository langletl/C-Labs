#include "Publication.h"
#include "Sales.h"

#pragma once
class Book : public Publication, public Sales
{
private:
	int pages;
public:
	Book(string* title, int price, int pages, float record[]);
	Book(const Book& b);
	~Book();
	friend ostream& operator<<(ostream& stream, const Book& b);
};

