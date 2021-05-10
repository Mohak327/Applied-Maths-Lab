#include<bits/stdc++.h>
using namespace std;

// write a program to find a positive root of equation x^2 - log(x) - 12 = 0 using Regula-Falsi method correct to three decimal places

double fx(double x){
	return x*x - log10(x) - 12.0 ;
}

int main(){
	cout<<"\t\t\t\t\t\t\tExperiment 2(b)\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 30-03-21 \n\n";		
	cout<<"\nProgram to find a positive root of equation x^2 - log(x) - 12 = 0 using Regula-Falsi method\n";
	double x0 = 3 , x1 = 4;
	double y0 = -3.47712 , y1 = 3.39794;
	
	cout<<"Equation is: x^2 - log10(x) - 12 = 0 \nRoot of equation is: ";
	
	double x = 0,y;
	
	while(1){
		x = (x0*fx(x1) - x1*fx(x0))/(fx(x1) - fx(x0));
		
		
		if(abs((int)(x*1000) - (int)(x0*1000)) == 0 or abs((int)(x*1000) - (int)(x1*1000)) == 0){
			cout<<x;
			break;
		}
		y = fx(x);
		if(y<0){
			x0 = x;
		}	
		else{
			x1 = x;
		}
	}
	
	
	return 0;
}

