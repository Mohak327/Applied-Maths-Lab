#include<bits/stdc++.h>
using namespace std;

// write a program to find real root of equation x^3 -2x - 5 = 0 by bisection method correct to three decimal places

int main(){	
	cout<<"\t\t\t\t\t\t\tExperiment 2(a)\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 30-03-21 \n\n";		
	cout<<"\nfind real root of equation x^3 -2x - 5 = 0 by bisection method\n";
	double x0 = 2 , x1 = 3;
	double y0 = -1 , y1 = 16;
	
	cout<<"Equation is: x^3 - 2x - 5 = 0 \nRoot of equation is: ";
	
	while(abs((int)(y0*100) - (int)(y1*1000)) > 0){
		double x = (x0+x1)/2;
		double y = (double)x*x*x - 2.0*x - 5.0 ;
		if(y<0){
			x0 = x;
		}
		else{
			x1 = x;
		}
		y0 = y1;
		y1 = y;
	} 
	cout<<x0;
	return 0;
}

