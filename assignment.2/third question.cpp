//for loop
//write a program to check whether a number prime or not


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cout<<"enter a number to check : ";
    cin>>n;
    int remainder;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number "<<endl;
            break;
        }
      
    }
    if(i==n){
        cout<<"prime number ";
    }
    return 0;
