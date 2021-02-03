#include "Publication.h"
#include "Sales.h"

#pragma once

class Audio : public Publication, public Sales
{
private:
	float storageCapacity;
	int length;
public:
	Audio(string* title, int price, float storageCapacity, int length, float record[]);
	Audio(const Audio& a);
	~Audio();
	friend ostream& operator<<(ostream& stream, const Audio& a);
};

