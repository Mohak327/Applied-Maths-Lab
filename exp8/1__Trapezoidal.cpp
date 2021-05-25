#include<iostream>
using namespace std;

float y(float x){
    return 1/(1+x*x);
}

// Function to evalute the value of integral
float trapezoidal(float a, float b, float n)
{
    // Grid spacing
    float h = (b-a)/n;

    // y0 + yn
    float s = y(a)+y(b);

    // 2(y1 + y2 + y3 + ....)
    for (int i = 1; i < n; i++)
        s += 2*y(a+i*h);

    // (h/2)*[(y0 + yn) + 2*(y1 + y2 + y3 + ....)]
    return (h/2)*s;
}

int main()
{
    // Range of definite integral
    float x0 = 0;
    float xn = 1;

    // n proportional to accuracy
    int n = 6;

    cout << "\nValue of the integral 1/(1 + x^2) is \n" << trapezoidal(x0, xn, n);
    cout << "\n\nMade By: Mohak Sharma, 012-CSEA-19";

    return 0;
}