// #include<bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void printMatrix(int **arr,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int** input(int ar,int ac){
	int** A = new int*[ar];
	for(int i=0;i<ar;i++){
		A[i] = new int[ac];
		for(int j=0;j<ac;j++){
			cin>>A[i][j];
		}
	}
	return A;
}

void addMatrix(int** A,int ar,int ac,int** B,int br,int bc){
	if(ar==br && ac==bc){
		int **C = new int*[ar];
		for(int i=0;i<ar;i++){
			C[i] = new int[ac];
			for(int j=0;j<ac;j++){
				C[i][j] = A[i][j] + B[i][j] ;
			}
		}
		printMatrix(C,ar,ac);//,3,3);
	}
}

void subMatrix(int** A,int ar,int ac,int** B,int br,int bc){
	if(ar==br && ac==bc){
		int **C = new int*[ar];
		for(int i=0;i<ar;i++){
			C[i] = new int[ac];
			for(int j=0;j<ac;j++){
				C[i][j] = A[i][j] - B[i][j] ;
			}
		}
		printMatrix(C,ar,ac);//,3,3);
	}
}

void prodMatrix(int** A,int ar,int ac,int** B,int br,int bc){
	if(ac==br){
		int **C = new int*[ar];
		for(int i = 0; i < ar; i++){
        	C[i] = new int[bc];
        	for(int j = 0; j < bc; j++){
        		C[i][j] = 0;
	            for(int k = 0; k < ac; k++){
	                C[i][j] += A[i][k] * B[k][j];
            	}
			}
		}
		printMatrix(C,ar,bc);
		//(3,3)
	}
}



int main(){
	int ar,ac,br,bc;

	cout<<"\t\t\t\t\t\t\t\t\t\t\tExperiment 1\n\t\t\t\t\t\t\t\t\t\t\tShubham Jindal CSE-A 40\n\t\t\t\t\t\t\t\t\t\t\tDate: 16-03-21 \n\n";

	cout<<"Enter number of rows of matrix A: ";
	cin>>ar;
	cout<<"Enter number of columns of matrix A: ";
	cin>>ac;

	cout << "Enter the elements of matrix-A: ";
	int**A = input(ar,ac);


	cout<<"\nEnter number of rows of matrix B: ";
	cin>>br;
	cout<<"Enter number of columns of matrix B: ";
	cin>>bc;

	cout << "Enter the elements of matrix-B: ";
	int**B = input(br,bc);

	cout<<"Matrix A is \n";
	printMatrix(A,ar,ac);

	cout<<"Matrix B is \n";
	printMatrix(B,br,bc);

	cout<<"Sum of matrices is \n";
	addMatrix(A,ar,ac,B,br,bc);

	cout<<"Difference of matrices is \n";
	subMatrix(A,ar,ac,B,br,bc);

	cout<<"Product of matrices is \n";
	prodMatrix(A,ar,ac,B,br,bc);

	return 0;
}


// void prodMatrix(int** A, int ar, int ac, int** B, int br, int bc){
// 	if(ac==br){
// 		int **C = new int*[ar];
// 		for(int i = 0; i < ar; i++){
//         	C[i] = new int[bc];
//         	for(int j = 0; j < bc; j++){
// 	            for(int k = 0; k < ac; k++){
// 	                C[i][j] += A[i][k] * B[k][j];
//             	}
// 			}
// 		}
// 		printMatrix(C,ar,bc);//,3,3);
// 	}
// }



