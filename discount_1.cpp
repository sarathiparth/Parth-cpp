#include<iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    if(amount<=100){
        cout<<amount;
    }
    else if(amount>100 && amount<600){
        cout<<amount - amount*0.1;
    }
    else if(amount>600){
        cout<<amount - amount*0.2;
    }

    return 0;
    
}