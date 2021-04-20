#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using namespace std;
#define EPSILON 0.001

double func(double x) {
    return x*x*x - 2*x - 5;
}

void bisection(double a, double b) {

    int count = 0;
    double c = a;
    while ((b-a) >= EPSILON) {
        c = (a+b)/2;
        count++;

        if (func(c) == 0.0)
            break;
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "\nRoot of the equation is : " << c << ", (" << count << " iterations)";
}

int main() {
    double a = -1, b = 3;
	cout <<"\n\nEquation is: x^3 - 2x - 5 = 0";
    bisection(a, b);
    cout << "\nMade by: Mohak Sharma, 12-CSEA-19\n\n";

// // Test code to print function values.
//     while(1) {
//             double x;
//         cout << "\n\nenter x: ";
//         cin >> x;
//         cout << "f(X) = " << x*x - log(x) - 12;
//     }

    return 0;
}



// Take seed values from user
//     cout << "Enter two initial(seed) values: ";
//     cin >> a >> b;
//     if (func(a) * func(b) >= 0) {
//         cout << "Invalid values of a and b. Please re-enter: \n";
//         cout << "Enter two initial(seed) values: ";
//     }

