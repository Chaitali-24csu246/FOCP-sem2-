#include <iostream>
using namespace std;
void arrev(int *arr, int n);
void secmaxmin(int *arr, int n);
int main(){
    int n;
    cout << "Enter number of elements you want to enter : " << endl ;
    cin >> n;
    cout << "Enter values : " << endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    arrev(arr, n);
    secmaxmin(arr,n);
    return 0;
}
void arrev(int *arr, int n){
    cout << endl << "Reversed array is : "<< endl;
    for(int i=n-1 ; i>=0; i--){
        cout << arr[i] << endl;
    }
}
void secmaxmin(int *arr, int n){
int min= INT_MAX, secmax=INT_MIN, secmin=INT_MAX;
    int max= INT_MIN,i;
    for(i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    if(max!=min){
    for(i=0;i<n;i++){
        if(arr[i]>secmax){
            if(arr[i]!=max){
        secmax=arr[i];}}
        if(arr[i]<secmin){
            if (arr[i]!=min){
        secmin=arr[i];}}
    }
    cout << "Second largest is : " << secmax << endl << "Second smallest is : " << secmin;
    } else {
        cout << "All elements of the array are the same";
    }
}
