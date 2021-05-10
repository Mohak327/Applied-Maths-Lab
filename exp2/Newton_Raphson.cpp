#include<bits/stdc++.h>
using namespace std;

// write a program to find a positive root of equation cos(x) -x*e^x = 0 using Newton-Raphson method correct to three decimal places

double fx(double x){
	return cos(x) - x*exp(x);
}

double fdashx(double x){
	return -1*sin(x) - exp(x) - x*exp(x);
}

int main(){
	cout<<"\t\t\t\t\t\t\tExperiment 2(c)\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 30-03-21 \n\n";		
	cout<<"\nProgram to find a positive root of equation cos(x) -x*e^x = 0 using Newton-Raphson method\n";
	double x0 = 1 , x1 = 0;
	double y0 = -2.17798 , y1 = 1;


	cout<<"Equation is: cos(x) -x*e^x = 0 \nRoot of equation is: ";
	
	double x = 0 ;
	double y = 0;
	
	while(1){
		x = x0 - fx(x0)/fdashx(x0) ;
		if(abs((int)(x*1000) - (int)(x0*1000)) == 0){
			cout<<x0;
			break;
		}
		x0 = x;
	}
	return 0;
}

