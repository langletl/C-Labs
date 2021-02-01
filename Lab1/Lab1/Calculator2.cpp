#include "Calculator2.h"
using namespace std;

void Calculator2::calcul() {
	int first, second, intermediary; //declare new variables
	char operation;
	vector<int> numbers;
	vector<char> operations;
	cout << "Enter your operation: ";
	cin >> first >> operation; //enter operation
	while (operation != '=')
	{
		if (operation == '!') {
			operations.push_back(operation);
			cin >> operation;
		}
		else {
			numbers.push_back(first);
			operations.push_back(operation);
			cin >> first >> operation;
		}
	}
	if (operation != '!') {
		numbers.push_back(first);
	}
	/*
	//check the content of the vectors
	for (int i = 0; i < operations.size(); i++)
	{
		cout << numbers[i] << " " << operations[i] << " ";
	}
	cout << numbers[numbers.size()-1];
	*/
	//do calculation of all factoriel first
	for (int i = 0; i < operations.size(); i++)
	{
		if (operations[i] == '!')
		{
			intermediary = calculation(numbers[i], 0, operations[i]);
			operations.erase(operations.begin() + i); //delete the operation done
			numbers[i] = intermediary; //replace the number by the result of the operation
		}
	}
	//then do calculation of all power second
	for (int i = 0; i < operations.size(); i++)
	{
		if (operations[i] == '^')
		{
			intermediary = calculation(numbers[i], numbers[i + 1], operations[i]);
			operations.erase(operations.begin() + i); //delete the operation done
			numbers.erase(numbers.begin() + i + 1); // delete the second number of the operation
			numbers[i] = intermediary; //replace the first number by the result of the operation
		}
	}
	//then do calculation of the rest
	int i = 0;
	while (i < operations.size() && numbers.size() != 1) {
		//do calculation if priority of calcul
		if (priority(operations[i]) == true) {
			intermediary = calculation(numbers[i], numbers[i + 1], operations[i]);
			operations.erase(operations.begin() + i); //delete the operation done
			numbers.erase(numbers.begin() + i + 1); // delete the second number of the operation
			numbers[i] = intermediary; //replace the first number by the result of the operation
			i = 0;
		}
		//if at the end no priority of operation do the first one
		else if (i == operations.size() - 1) {
			intermediary = calculation(numbers[0], numbers[1], operations[0]);
			operations.erase(operations.begin()); //delete the operation done
			numbers.erase(numbers.begin() + 1); //delete the second number of the operation
			numbers[0] = intermediary; //replace the first number by the result of the operation
			i = 0;
		}
		else {
			i++;
		}
	}
	cout << numbers[0] << "\n"; //display the final number
}

bool Calculator2::priority(int operation) {
	switch (operation)
	{
	case '+':
		return false;
	case '-':
		return false;
	case '*':
		return true;
	case '/':
		return true;
	case '%':
		return true;
	default:
		return false;
	}
}

int Calculator2::calculation(int first, int second, char operation) {
	switch (operation)
	{
	case '+':
		return first + second;
	case '-':
		return first - second;
	case '*':
		return first * second;
	case '/':
		return first / second;
	case '%':
		return first % second;
	case '^':
		return pow(first, second);
	case '!':
		second = 1;
		for (int i = 1; i < first + 1; i++)
		{
			second = second * i;
		}
		return second;
	default:
		return 0;
	}
}
