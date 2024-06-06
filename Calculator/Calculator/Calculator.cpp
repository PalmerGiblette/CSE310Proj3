//C++ Calculator

#include <iostream>
#include <cmath>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "C++ Calculator" << endl << endl;
    cout << "Welcome, please only use two numbers." << endl;
    cout << "(Options are: +,-,*,/,^)" << endl;

    Calculator c;
    while (true)
    {
        // This protects users from dividing 0 by 0, and causing further errors
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "You can not divide these two" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Calculation: " << x << oper << y << " = " << result << endl;
    }

    return 0;
}


//This is the heart of the calculator. It allows for all the operators to be used, and selected by the user
double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '^':
        return pow(x,y);
    default:
        return 0.0;
    }
}
