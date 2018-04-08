# include <iostream>
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
            cout << "Error! operator is not correct" << endl;
            break;
    }
	return ans;
}
