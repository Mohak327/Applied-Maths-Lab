// Write a program to find value of y for x = 1.2 with h = 0.1 , from the differential equation dy/dx = x + y ,
// given y = 0 for x = 1 using taylor series method.

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}



int main(){
	cout<<"\t\t\t\t\t\t\tExperiment 6\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 04-05-21 \n\n";			
	cout<<"\nProgram to evaluate y for x = 1.2 using Taylor Series Method  from differential equation:";
	cout<<"\ndy/dy = x + y \ngiven y = 0 for x = 1.\n\n";
	
	float h = 0.1;
	float x = 1.2;
	
	float arr[] = {0.110,1.21,2.21,2.21,2.21};
	float y = 0;
	for(int i=0;i<5;i++){
		y += (arr[i]*pow(h,i))/fact(i) ;
	}
	cout<<"Value of y for x = 1.2 is ";
	cout<<y<<endl;
	
	
	
	return 0;
}
