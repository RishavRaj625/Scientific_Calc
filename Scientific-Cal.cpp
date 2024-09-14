#include <iostream>
#include <cmath> // Include the math library for mathematical functions

using namespace std;

class ScientificCalculator {
public:
    // Function to perform addition
    double add(double a, double b) {
        return a + b;
    }

    // Function to perform subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Function to perform multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Function to perform division
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Error: Division by zero!" << endl;
            return NAN; // Return NaN (Not-a-Number) for division by zero
        }
    }

    // Function to calculate square root
    double squareRoot(double a) {
        return sqrt(a);
    }

    // Function to calculate power (a raised to the power of b)
    double power(double a, double b) {
        return pow(a, b);
    }

    // Function to calculate sine (input angle in radians)
    double sine(double angle) {
        return sin(angle);
    }

    // Function to calculate cosine (input angle in radians)
    double cosine(double angle) {
        return cos(angle);
    }

    // Function to calculate natural logarithm (base e)
    double logarithm(double a) {
        return log(a);
    }

    // Function to calculate exponential function (e raised to the power of a)
    double exponential(double a) {
        return exp(a);
    }
};

int main() {
    ScientificCalculator calc;
        int x,y;
        cout<<"\nEnter the value of x :- ";
        cin>>x;
        cout<<"Enter the value of y :- ";
        cin>>y;
    // Example usage of the scientific calculator
    double result = calc.add(x, y);
    cout<<"\nAddition of " << "x + y = " << result << endl;

    result = calc.subtract(x, y);
    cout<<"Subtraction of " << "x - y = " << result << endl;

    result = calc.multiply(x, y);
    cout<<"Multiplication of " << "x * y = " << result << endl;

    result = calc.divide(x, y);
    cout<<"Division of " << "x / y = " << result << endl;

    result = calc.squareRoot(x);
    cout<<"Square root of x = " << result << endl;

    result = calc.power(x, y);
    cout<<"Power of " << "x ^ y = " << result << endl;

    cout<<"\n  -: Advanced :- \n"<<endl;

    result = calc.sine(0.5); // sine of 0.5 radians
    cout << "value of sin(0.5) = " << result << endl;

    result = calc.cosine(0.0); // cosine of 0 radians
    cout << "value of cos(0) = " << result << endl;

    result = calc.logarithm(10.0); // natural logarithm of 10
    cout << "value of ln(10) = " << result << endl;

    result = calc.exponential(2.0); // e raised to the power of 2
    cout << "value of e^2 = " << result << endl;

    return 0;
}
