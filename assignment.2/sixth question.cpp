//for loop 
//write a program to display the first n term of fibonacci series

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,c;
    cout<<"enter a number to fibonacci series : ";
    cin>>n;
    int a,b=0;
    a=1;
    cout<<b<<" "<<a<<" ";
    for(i=1;i<n;i++){
      c=a+b;
      cout<<c<<" ";
      b=a;
      a=c;
    }
    cout<<endl; 
    return 0;
}
