#include <iostream>
//#include "cal.cpp"
using namespace std;
int cal(char, float, float);
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
