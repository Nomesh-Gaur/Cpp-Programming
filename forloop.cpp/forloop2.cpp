//HOLLO RECTANGLE
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==1 || i==a || j==1 || j==b){
                cout<<"*";
                }
            else{
                cout<<" ";
            }
        }
          cout<<  endl;
    }

    return 0;
//RIGHT ANGLE TRIANGLE WITH THE HELP OF STARS
    #include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
          cout<<"*" ; 
        }
          cout<<  endl;
    }

    return 0;
}
