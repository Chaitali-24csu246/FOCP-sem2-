#include <iostream>
using namespace std;
//Assignment 1 question 4
int main(){
    int n,num=1,count=0;
    do{
    cout << "Enter dimension of the square matrix : ";
    cin >> n;} while(n<=0);
    int arr[n][n];  
    int first=0,last=n-1,left=0,right=n-1,i,j;
    while(first<=last && left <=right){
        for(i=left; i<=right;i++){
            arr[first][i]=num++;
        }
        first++;
        for(i=first;i<=last;i++){
            arr[i][right]=num++;
        }
        right--; 
int arrcopy[n][n];
/*for(i=0;i<n;i++){
for(j=0;j<n;j++){
arrcopy[i][j]==arr[i][j];}}*/
        if(first<=last){
            for(i=right; i>=left;i--){
                arr[last][i]=num++;
            }
            last--;}
        if (left<=right){
            for (i=last;i>=first;i--){
                arr[i][left]=num++;}
            left++; }
    }
    for(i=0;i<n;i++){
        for(j = 0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

