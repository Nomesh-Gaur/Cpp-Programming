//forlmula to covert temprature  fahrenheit to celcious 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int F,a;
    a=32;
    cout<< "enter the temprature in fahrenheit :";
    cin >> F;
    cout<<endl;
    float C;
    C=(F-a)*5.0/9.0;
    cout<<"Temprature in celciuos : " << C << endl;

    return 0;
}

//forluma of volume of a cube 



#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,V;
    cout << "Enter the side of cube : ";
    cin >> a ;
    cout << endl;
    
    V =(a*a*a);
    
    cout <<"volume of cube = "<< V <<endl;

    return 0;
}
// formula Area and perimeter of a rectangle 


#include <bits/stdc++.h>
using namespace std;
int main() {
    float l,b;
    float A;
    float P;
    cout << "Enter the lenght of rectangle : ";
    cin >> l ;
    cout << endl;
    cout <<"enter the breadth of rectangle : ";
    cin >> b;
    
    //Area
    
    A = (l*b);
    cout <<"Area of rectangle = " << A <<endl;
    
    //Perimeter
    
    P = (l+b)*2;
    cout <<"the perimeter of rectangle = " << P <<endl;
    

    return 0;
}
