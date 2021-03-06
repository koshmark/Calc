// Calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int num1, int num2)
{
	return num1 + num2;
}
int subtract(int num1, int num2)
{
	return num1 - num2;
}
int multiply(int num1, int num2)
{
	return num1 * num2;
}
int divide(int num1, int num2)
{
	return num1 / num2;
}

int main()
{
	char operation = 'a';
	int num1, num2;

	while(operation != 'exit')
	{
		cout << "Choose operation: +, -, *, /, exit;" << endl;
		cin >> operation;

		switch(operation)
		{
			case '+':
				cin >> num1;
				cin >> num2;
				cout << num1 << "+" << num2 << "=" << add(num1, num2) << endl;
				break;
			case '*':
				cin >> num1;
				cin >> num2;
				cout << num1 << "*" << num2 << "=" << multiply(num1, num2) << endl;
				break;
			case '-':
				cin >> num1;
				cin >> num2;
				cout << num1 << "-" << num2 << "=" << subtract(num1, num2) << endl;
				break;
			case '/':
				cin >> num1;
				cin >> num2;
				cout << num1 << "/" << num2 << "=" << divide(num1, num2) << endl;
				break;
			case 'exit':
				return 0;
			default:
			cout << "error" << endl;
		}
	}
	return 0;
}
