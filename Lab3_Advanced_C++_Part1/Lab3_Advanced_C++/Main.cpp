#include "Book.h"
#include "Audio.h"
#include "Sales.h"

int main() {
	float sales[3] = { 104,45,37 };
	string name1 = "Book1";
	string* name = &name1;
	
	Book book1 = Book(name, 7, 144, sales);
	Audio audio1 = Audio(name, 5, 155, 78, sales);
	
	cout << book1;
	cout << audio1;
	
	Book copy = Book(book1);
	
	cout << copy;
	cout << book1;
	
	cin >> name1; //for .exe (to keep the window open)
	return 0;
}