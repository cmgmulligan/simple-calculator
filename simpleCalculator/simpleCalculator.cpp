#include <iostream>
using namespace std;


int main()
{
	double num, result, num2;
	char op;
	do {
		cout << "enter number" << endl;
		cin >> num;
		if (num == -999) break;

		cout << "enter operator ( +, -, *)" << endl;
		cin >> op;
		if (op != '+') break;
		else if (op != '-')break;
		else if (op != '*') break;
		cout << "enter final number" << endl;
		cin >> num2;
		if (num2 == -999) break;

		if (op == '+') result = num + num2;
		else if (op == '-') result = num - num2;
		else if (op == '*') result = num * num2;
		cout << result << endl;
		cin.get();
	} while (true);
}

//double CalculateResult(double num1, double num2, char op) {

//	double result;

//switch (op) {
//case '+':
//	result = num1 + num2;
//	break;

//case '-':
//	result = num1 - num2;
//	break;

//case '*':
//result = num1 * num2;
//break;

//}

//return result;
//}



