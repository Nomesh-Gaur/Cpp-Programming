//Area is 150 and perimwter is 50

#include<bits/stdc++.h>
using namespace std;

int main() {
	int l;
	int b;
	int are;
	int peri;
  
	l=15;
	b=10;
  
	cout<<"the lenght of a rectangle -> "<< l << endl;
	cout<<"the breadth of a rectangle -> " << b  << endl;
  
	//Area
	are=(l*b);
	cout<<"the area of a rectangle = "<< are <<endl;
  
	//perimeter 
      peri	=(l+b)*2;
	cout<<"the perimeter of a rectangle =" << peri << endl;
	
	return 0;
}
