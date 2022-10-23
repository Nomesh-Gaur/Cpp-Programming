//for loop
//write a program to find thegreatest common divisor(GCD) of two numbers 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,i;
    int GCD;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    for(i=2;i<=a;i++){
        if(a%i==0 &&b%i==0){
            GCD=i;
        }
    }
    cout<<GCD<<" "<<"is gcd of  "<<a<<" and "<<b;
    return 0;
}

