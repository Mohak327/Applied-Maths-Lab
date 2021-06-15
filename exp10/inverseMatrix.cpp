#include<iostream>
#include<cmath>
using namespace std;

float determinant(float [][25], float);
void cofactor(float [][25], float);
void transpose(float [][25], float [][25], float);

int main()
{
  float a[25][25], k, d;
  int i, j;
  cout << "\nEnter the order of the matrix : ";
  cin >> k;
  cout << "Enter the elements of matrix :";
  for (i = 0;i < k; i++) {
     for (j = 0;j < k; j++) {
        scanf("%f", &a[i][j]);
        }
    }
  d = determinant(a, k);
  if (d == 0)
   cout << "\nInverse of entered matrix is not possible. (Determinant=0)\n";
  else
   cofactor(a, k);
}

/*For calculating Determinant of the Matrix */
float determinant(float a[25][25], float k)
{
  float s=1, det=0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
        return (a[0][0]);
  else {
    det = 0;
    for (c = 0; c < k; c++) {
        m = 0;
        n = 0;
        for (i=0; i<k; i++) {
            for (j=0 ; j<k; j++) {
                b[i][j] = 0;
                if (i!=0 && j!=c) {
                    b[m][n] = a[i][j];
                    if (n < (k-2))
                        n++;
                    else {
                        n = 0;
                        m++;
                    }
                }
            }
        }
        det = det + s * (a[0][c] * determinant(b, k - 1));
        s = -1 * s;
        }
    }

    return (det);
}

void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
  }
  transpose(num, fac, f);
}
/*Finding transpose of matrix*/
void transpose(float num[25][25], float fac[25][25], float r) {
  int i, j;
  float b[25][25], inverse[25][25], d;

  for (i = 0;i < r; i++) {
     for (j = 0;j < r; j++)
         b[i][j] = fac[j][i];
  }

  d = determinant(num, r);
  for (i = 0;i < r; i++) {
     for (j = 0;j < r; j++)
        inverse[i][j] = b[i][j] / d;
  }
   cout << "\n\nThe inverse of matrix is : \n";

   for (i = 0;i < r; i++) {
        for (j = 0;j < r; j++)
            cout << inverse[i][j] << "\t";
        cout << "\n";
     }
}

















// // #include<bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <conio.h>
// using namespace std;

// void printMatrix(int **arr,int order){
// 	for(int i=0;i<order;i++){
// 		for(int j=0;j<order;j++){
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// int** input(int order){
// 	int** A = new int*[order];
// 	for(int i=0;i<order;i++){
// 		A[i] = new int[order];
// 		for(int j=0;j<order;j++){
// 			cin>>A[i][j];
// 		}
// 	}
// 	return A;
// }


// int main(){
// 	int ar,ac,br,bc;

// 	cout<<"\nProgram to inverse a matrix\n--------------------------------------------------------------\n";

// 	cout<<"Enter the order of matrix A: ";
// 	cin>>ar;
// 	cout << "Enter the elements of matrix-A: ";
// 	int**A = input(ar);

// 	cout<<"Matrix A is \n";
// 	printMatrix(A,ar);

//     // float inv[N][N];
//     // cout << "Input matrix is :\n"; printMatrix(M);
//     // cout << "\nThe Inverse is :\n";
//     // if (INV(A, inv)) printMatrix(inv);

// 	return 0;
// }



