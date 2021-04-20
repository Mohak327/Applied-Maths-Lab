#include<iostream>
using namespace std;

#define f(x,y) (x + (y*y))

using namespace std;
int main() {
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int i, n;

    x0 = 0;
    y0 = 1;
    xn = 0.2;
    cout << "Enter number of steps: ";
    cin>> n;

    // No. of iterations required
    h = (xn-x0)/n;

    cout << "\nx0\ty0\tyn\n";
    cout << "------------------\n";
    for(i=0; i < n; i++) {
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0+h/2), (y0+k1/2)));
        k3 = h * (f((x0+h/2), (y0+k2/2)));
        k4 = h * (f((x0+h), (y0+k3)));
        k = (k1+2*k2+2*k3+k4)/6;
        yn = y0 + k;
        cout<< x0 << "\t" << y0 << "\t" << yn << endl;
        x0 = x0+h;
        y0 = yn;
    }

    /* Displaying result */
    cout << "\nValue of y at x = " << xn << " is " << yn;

    return 0;
}