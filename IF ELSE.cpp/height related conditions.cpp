//wrte a program to check the dwarf person

#include<bits/stdc++.h>
using namespace std;

int main() {
	int height;
    cout<<"Height of a person(in centimeter) : ";
	cin>> height;
	if(height<=120){
	  cout<<"dwarf person ";
	}
	else if(height>120&&height<150){
	    cout<<"average Height person";
	}
	else{
	cout<<"tall person";
	}
	return 0;
}
