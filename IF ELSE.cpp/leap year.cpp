// write a program to check year is leap or not 

#include<bits/stdc++.h>
using namespace std;

int main() {
	int Y;
	cin>>Y;
	cout<<"Year is : "<< Y <<endl;
	if(Y%4==0){
	  cout<<"leap year ";
	}
	else{
	cout<<"not a leap year";
	}
	return 0;
}
