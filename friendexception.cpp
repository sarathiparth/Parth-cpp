#include<iostream>
using namespace std;

int division(int x , int y){
    if(y==0){
        throw 101;
    }
    else{
        return x/y;
    }
}
int main(){
    int a = 10, y = 5, z;

    try{
        z = division(2,0);
        cout<<z;
    }

    catch(int m){
        cout<<"division by zero"<<m;
    }

    cout<<"bye";

    return 0;
}