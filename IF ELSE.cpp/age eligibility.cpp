//write a program to check theck the is eligible for cast a vote or not 


#include<bits/stdc++.h>
using namespace std;

int main() {
	int age;
    cout<<"Age of candidate : ";
	cin>> age;
	if(age>=18){
	  cout<<"eligible for cast a vote ";
	}
	else{
	cout<<"not eligible for cast a vote";
	}
	return 0;
