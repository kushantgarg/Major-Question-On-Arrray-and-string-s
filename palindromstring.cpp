#include<string.h>
#include<iostream>
using namespace std; 
int main()
{
    char s[10],a[10];
    cout<<"Enter a string"<<endl;
    cin.getline(s,10);
    strcpy(a,s);
    strrev(s);
    int b=strcmp(a,s);
    if(b==0)
    cout<<"string is a palindrom";
    else 
    cout<<"String is not  a palindrome";
    
}
