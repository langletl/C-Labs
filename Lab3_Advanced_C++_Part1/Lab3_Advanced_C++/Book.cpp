#include "Book.h"

Book::Book(string* titleIn, int priceIn, int pagesIn, float recordIn[]) : Publication(titleIn, priceIn), pages(pagesIn), Sales(recordIn)
{
	
}

Book::Book(const Book& b) : Publication(new string(*b.title), b.price), pages(b.pages), Sales(b)
{
	
}

Book::~Book()
{
	delete title;
}

ostream& operator<<(ostream& output, const Book& b) {
	output << "*BOOK (" << b.title << ")\n\nTitle: " << *(b.title) << "\nPrice: " << b.price << "$\nNumber of pages: " << b.pages << "\n" << endl;
	return output;
}