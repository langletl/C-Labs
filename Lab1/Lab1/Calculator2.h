#pragma once
#include <vector>
#include <iostream>
#include <cmath>

class Calculator2
{
public:
	void calcul();
	bool priority(int operation);
	int calculation(int first, int second, char operation);
};
