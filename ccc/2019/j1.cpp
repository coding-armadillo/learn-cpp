#include <iostream>
using namespace std;
int main(){
    int a, b, t = 0;
    for(int i=0; i<3;i++ ){
        cin>>t;
        a=a+t-i+1;
    }
    for(int g=0; g<3;g++ ){
        cin>>t;
        b=b+t-g+1;
    }

    if(a<b){cout<<"b";}
    else if(a>b){cout<<"a";}
    else{cout<<"t";} 


}