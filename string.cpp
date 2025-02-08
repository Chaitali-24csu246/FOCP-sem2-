#include <iostream>
#include <algorithm>
#include <cstring>
//String manipulation A1Q3
//Ignore spaces and case sensitivity
//Without inbuilt c++ std::str
using namespace std;
void replacevowels(char *str){
char *ptr=str;
while(*ptr != '\0'){
    if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' || *ptr=='a' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='e'){
        *ptr='&';
    }
    ptr++;
}
}
int len(char *str){
    char *ptr = str;
    int len=0;
while(*ptr != '\0'){
    len+=1;
    ptr++;
}
return len;
}
void occur(char *str);
int ispal(char *str);
int main(){
    char str[20];
    cout << "Enter a single word : ";
    cin >> str;
    if(ispal(str)==0)
    cout << "String is palindrome" << endl;
    else
    cout << "String is not palindrome" << endl;
    occur(str);
    char copy[20];
    strcpy(copy, str);
    cout << "String with vowels replaced : " << endl;
    replacevowels(copy);
    cout << copy;
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
void occur(char *str){
    sort(str, str + len(str));
    int i,count=0;
    char a=str[0];
    for(i=0;i<=len(str);i++){
if(str[i]==a){
    count+=1;
} else {
    cout << "Frequency of " << a << " is " << count << endl;
    a=str[i];
    count=1;
}
    }
}
