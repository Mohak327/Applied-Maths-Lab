// write a program to evaluate y for x = 10 using lagrange interpolation formula  from following data
//		x:	5	6 	9 	11
//		y:  12	13	14	16
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float x[100], y[100], xp, yp=0, p;
	int i, j, n;

	cout<<"Enter number of data points: ";
	cin>>n;
	cout<<"Enter data \n\n";

	cout<<"Enter x-values: "<< endl;
	for (i=1; i<=n; i++) {
	    cout<<"x"<< i << " ";
		    cin>>x[i];
    }

	cout<<"\nEnter y-values: \n";
    for (i=1; i<=n; i++) {
        cout<<"y"<< i << " ";
            cin>>y[i];
	}
	cout << "\nEnter interpolation point\nx = ";
	cin >> xp;

	for (i=1; i<=n; i++) {
		p=1;
	    for (j=1; j<=n; j++) {
			if (i!=j)
			    p *= (xp - x[j]) / (x[i] - x[j]);
		}
		yp += p * y[i];
	}

    cout << "Interpolated value at "<< xp << " is "<< yp;
    // cout << "Mohak Sharma, 12-CSEA-19 (01220802719)";    return 0;
}