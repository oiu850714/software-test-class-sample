#include <iostream>
#include "cal.h"
using namespace std;

int main(){

    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    int ans;
    ans = cal(op, num1, num2);
    cout << "ans: " << ans << endl;
    return 0;
}
