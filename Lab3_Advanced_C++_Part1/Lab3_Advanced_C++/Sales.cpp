#include "Sales.h"

Sales::Sales(float recordIn[3])
{
	for (int i = 0; i < 3; i++)
	{
		record[i] = recordIn[i];
	}
}

Sales::Sales(const Sales& a)
{
	for (int i = 0; i < 3; i++)
	{
		record[i] = a.record[i];
	}
}
