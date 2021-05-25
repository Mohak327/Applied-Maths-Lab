// Write a program to fit the equation of a line in te from of (y = ax + b) fro the following data using the method of least squares.

// x : 1     2     3     4     5
// y : 14	 27    40    55    68

#include<iostream>
#include<math.h>

#define N 50
using namespace std;

int main() {
    int n;
    float x[N], y[N], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;

    cout<<"\nNo. of data points:  ";
    cin >> n;   //  ATQ, n=5

    cout << "Enter " << n <<" values of x: ";
    for(int i=1; i<=n; i++) {
        cin >> x[i];
    }

    cout << "Enter " << n <<" values of y: ";
    for(int i=1; i<=n; i++) {
        cin >> y[i];
    }

    for(int i=1;i<=n;i++) {
        sumX = sumX +x[i];
        sumX2 = sumX2 +x[i]*x[i];
        sumY = sumY +y[i];
        sumXY = sumXY +x[i]*y[i];
    }

    b = ((sumX2*sumY -sumX*sumXY)*1.0/(n*sumX2-sumX*sumX)*1.0);
    a = ((n*sumXY-sumX*sumY)*1.0/(n*sumX2-sumX*sumX)*1.0);

    cout << "Values are: \n\ta = " << a << "\n\tb = " << b;
    cout << "\nEquation of line is : y = " << a << "x + " << b;

    return (0);
}