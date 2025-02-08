#include <iostream>
//String manipulation A1Q3
//Ignore spaces and case sensitivity
//Without functions
using namespace std;
int len(char *str){
    char *ptr = str;
    int len=0;
while(*ptr != '\0'){
    len+=1;
    ptr++;
}
return len;
}
int ispal(char *str);
int main(){
    char str[20];
    cout << "Enter a single word : ";
    cin >> str;
    if(ispal(str)==0)
    cout << "String is palindrome";
    else
    cout << "String is not palindrome";
    return 0;
}
int ispal(char *str){
int n=len(str);
int i,j,a;
for(i=0,j=n-1;i<n/2;i++,j--){
    if(str[i]!=str[j]){
    a=1;
    break;
    }
}
return a;
}
