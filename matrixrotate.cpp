#include <iostream>
using namespace std;
//Assignment 1 question 5
int main() {
    int n;
    int i,j;
    do
    {
        cout << "Enter the order of square matrix : ";
    cin >> n;
    } while (n<=0);
    int mat[n][n], mat2[n][n];
    cout << "Give values for the matrix : " << endl ;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    cout << "Matrix entered is : " << endl;
    for(i=0;i<n;i++){
        for(j=0;j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl; }
for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat2[j][i]=mat[i][j];  
        }
    }for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat[i][j] = mat2[i][n-j-1]; 
        }
    }
    cout << endl << "90-degree rotated matrix : " << endl;
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
