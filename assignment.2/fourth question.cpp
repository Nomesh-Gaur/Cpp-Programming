//For loop
//write a program to find the factorial of prime number

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cout<<"enter a number to find factorial : ";
    cin>>n;
    int s;
    s=1;
    for(i=1;i<=n;i++){
       s=s*i; 
    }
    cout<<n<<"!"<<"="<<" "<<s; 
    return 0;
}
