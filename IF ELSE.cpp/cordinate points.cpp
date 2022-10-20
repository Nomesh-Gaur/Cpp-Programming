//write a programm to check the cordinate points lies in which quadrent 

#include<bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
    cout<<"enter the value of  (X)  : ";
	cin>>x;
	cout<<"enter the value of (Y)   : ";
	cin>>y;
	cout<<"cordinate points are "<<" ("<< x<< ","<<y<<")"<<endl;
	if(x>0&&y>0){
	  cout<<"cordinate points lies in first quadrent" ;
	}
	else if(x<0 && y>0){
	    cout<<"cordinate points lies in second quadrent";
	}
	else if(x<0 && y<0){
	cout<<"cordinate poiunts lies in third quadrent";
	}
	else if(x>0&& y<0){
	    cout<<"cordinate points lies in fourth quadrent";
	}
	else{
	    cout<<"cordinate points lies on origin";}
	return 0;
}
