// write a program to evaluate y for x = 10 using lagrange interpolation formula  from following data
//		x:	5	6 	9 	11
//		y:  12	13	14	16

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	cout<<"\t\t\t\t\t\t\tExperiment 4\n\t\t\t\t\t\t\tShubham Jindal CSE-A 40\n\t\t\t\t\t\t\tDate: 13-04-21 \n\n";		
	cout<<"\nProgram to evaluate y for x = 10 using Lagrange interpolation formula  from following data:\n";
	cout<<"\nx:\t5\t6\t9\t11";
	cout<<"\ny:\t12\t13\t14\t16";
	double x[] = {5,6,9,11};
	double y[] = {12,13,14,16};
	double x0 = 10 ;
	int n = 4;
	double result = 0;
	
	for(int i=0;i<n;i++){
		double yi = 1;
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else{
				yi *= ((x0-x[j])/(x[i]-x[j])) ;
			}
		}
		yi = yi*y[i];
		result += yi;
	}
	cout<<"\n\nThe value of y for x = 10 is "<<result;
		

	return 0;
}

