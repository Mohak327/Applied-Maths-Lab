// write a program to evaluate  lim(0-1) (1/(1+x^2)) dx  h=1/6 using
// 1. trapezoidal rule
// 2. simpson 1/3 rule
// 3. simpson 3/8 rule

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define countsetb(n) __builtin_popcount(n)

float fx(float x){
	return (float)(1/(1+(x*x)));
}


int32_t main(){
	fast_io;

	cout<<"\t\t\t\t\t\t\tExperiment 8\n\t\t\t\t\t\t   Shubham Jindal CSE-A 40\n\t\t\t\t\t\t     RollNo.04020802719\n\t\t\t\t\t\t\tDate: 25-05-21 \n\n";
	cout<<"\nProgram to evaluate  lim(0-1) (1/(1+x^2)) dx  h=1/6 using: ";
	cout<<"\n1. trapezoidal rule";
	cout<<"\n2. simpson 1/3 rule";
	cout<<"\n3. simpson 3/8 rule \n\n";

	float h = 1;
	h/=6;
	int n = 7;
	float x[n];
	for(int i=0;i<n;i++){
		x[i] = h*i;
	}
	float y[n];
	for(int i=0;i<n;i++){
		y[i] = fx(x[i]);
	}
	float ans = 0;
	ans+= y[0] + y[n-1];
	for(int i=1;i<n-1;i++){
		ans+= 2*y[i];
	}
	ans*= h;
	ans/= 2;

	cout<<"Using trapezoidal rule: "<<ans<<endl;

	ans = 0;
	ans+= y[0] + y[n-1];
	for(int i=1;i<n-1;i+=2){
		ans+= (4*y[i]);
	}
	for(int i=2;i<n-1;i+=2){
		ans+= (2*y[i]);
	}
	ans*=h;
	ans/=3;

	cout<<"Using simpson 1/3 rule: "<<ans<<endl;

	ans = 0;
	ans+= y[0] + y[n-1];

	for(int i=1;i<n-1;i++){
		if((i%3) == 0){
			ans+= (2*y[i]);
		}
		else{
			ans+= (3*y[i]);
		}
	}

	ans*= (3*h);
	ans/=8;

	cout<<"Using simpson 3/8 rule: "<<ans<<endl;

	return 0;
}