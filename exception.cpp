#include<iostream>
using namespace std;

int main(){
    int a = 10, y = 5, z;

    try{
        if(y==0){
            throw 1;
        }
        z = a/y;
        cout<<z;
    }

    catch(int m){
        cout<<"division by zero"<<m;
    }

    cout<<"bye";

    return 0;
}