#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"biggest is a";
        }

    }
    else{
        if(b>c){
            cout<<"biggest is b";
        }
        else{
            cout<<"biggets is c";
        }
    }

    return 0;
}