#include <iostream>
#include <string> 

using namespace std;

#pragma once
class Publication
{
protected:
	string* title;
	int price;
public:
	Publication(string* title, int price);
};

