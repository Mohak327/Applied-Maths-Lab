// Write a program to find value of y for x = 0.2 given that dy/dx = x + y^2 and y = 1 for x = 0 using Runge Kutta Method

#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}

double func(double x,double y){
	return (x + y*y) ;
}

int main(){
	cout<<"\t\t\t\t\t\t\tExperiment 5\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 20-04-21 \n\n";			
	cout<<"\nProgram to evaluate y for x = 0.2 using Runge Kutta Method  from differential equation:";
	cout<<"\ndy/dy = x + y^2 \ngiven y = 1 for x = 0 .\n\n";
	
	double x = 0.2;
	double x0 = 0;
	double y0 = 1;
	double h = x - x0 ;
	double K = 0;
	double K1 = h*func(x0,y0);
	double K2 = h*func(x0+h/2 , y0+K1/2 );
	double K3 = h*func(x0+h/2 , y0+K2/2 );
	double K4 = h*func(x0+h , y0+K3 );
	K = (K1 + 2*K2 + 2*K3 + K4)/6 ;
	
	
	cout<<"Value of y for x = 0.2 is ";
	cout<<y0+K<<endl;
	
	
	
	return 0;
}
