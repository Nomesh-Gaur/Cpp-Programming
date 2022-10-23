//write program to check eligibility of student


#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,p,c;
    cout<<"marks in maths : ";
    cin>>m;
    if(m>=65){
        cout<<"marks in physics : ";
        cin>>p;
        if(p>=55){
            cout<<"marks in chemistry : ";
            cin>> c;
            if(c>=50){
                cout<<"the total marks : "<<m+p+c<<endl;
                if((m+p+c)>=190){
                    cout<<"sum of maths and physics : "<<m+p<<endl;
                    if((m+p)>=140){
                        cout<<"Student eligible for admission";
                    }
                    else{
                        cout<<"Student not eligible for admission"; 
                    }
                }
                else{
                    cout<<"not eligible for admission";
                }
            }
            else{
                cout<<"not eligible for admission";
            }
        }
        else{
            cout<<"not eligible for admission";
        }
    }
    else{
        cout<<"Student not eligible for admission";
    }
    
   
    return 0;
}
