#include <iostream>
using namespace std;
int isprime(int n){
    int a=1;
    if(n==0 || n==1){
        return 0;
    } 
    else if(n<0){
        return 1;
    }
    else {
        for(int i=2; i<n; i++){
            if(i!=n){
                if(n%i==0){
                    a=0;
                    break;
                }
            }
        }
        if(a==0){
            
            return 2;
        } else {
            
            return 3;
        }
    }
}
void factors(int n){
    cout << endl << "Factors are: " << endl;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout << i << endl;
        }
    }
}
void nextprime(int n){
    n++;
    while(isprime(n)!=3){
        n++;
    }
    cout << endl << "Next prime number is : " << n;
}
int main(){
    int n;
    // Check whether n is a prime number
    cout << "Enter a number : ";
    cin >> n;
    int a=isprime(n);
    switch(a){
        case 0: cout << "Number is neither prime nor composite"; break;
        case 1: cout << "Negative numbers are neither prime nor composite"; break;
        case 2: cout << "Number is composite"; break;
        case 3: cout << "Number is prime" ; break;
        default: cout << "Code error";
    }
    if(a==2)
    factors(n);
    if(a==3)
    nextprime(n);
return 0;
}