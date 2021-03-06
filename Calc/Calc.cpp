// Calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int add (int num1, int num2) {
return num1 + num2;
}
int subtract (int num1, int num2) {
	return num1 - num2;
}
int multiply(int num1, int num2) {
	return num1 * num2;
}
double divide(int num1, int num2){
	//FIXME: check for 0
	return num1 / num2;
}
void showResult(int num1, int num2, char operation, double result ) {
	cout << num1 << operation << num2 << "=" << result << endl;
}

int main() {
	int operation = 1;
	int num1, num2;

	while(true)
	{
		cout << "Choose operation: +, -, *, /, exit;" << endl;
		cin >> operation;
		if (operation <= 0) {
			exit(0);
		}
		cin >> num1;
		cin >> num2;
		switch(operation)
		{
			case 1:
				showResult(num1, num2, '+', add(num1, num2));
				break;
			case 2:
				showResult(num1, num2, '*', multiply(num1, num2));
				break;
			case 3:
				showResult(num1, num2,'-', subtract(num1, num2));
				break;
			case 4:
				if (num2 > 0) {
					showResult(num1, num2, '/', divide(num1, num2));
				}
				break;
		}
	} 
	return 0;
}
