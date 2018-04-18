#include <iostream>
//#include <stdexcept>
using namespace std;

int cal(char op, float num1, float num2)
{
	int ans =0;

	switch(op)
	{
		case '+':
			ans = num1+num2;
			break;

		case '-':
			ans = num1-num2;
			break;

		case '*':
			ans = num1*num2;
			break;

		case '/':
			ans = num1/num2;
			break;

		default:
			// If the operator is other than +, -, * or /,
			//error message is shown
			throw std::out_of_range("error op: " + op);
			break;
	}
	return ans;
}
