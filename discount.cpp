#include<iostream>
using namespace std;

int main(){
    float disAmount;
    float amount;

    cin>>amount;
    
    if(amount>=5000){
        disAmount = amount - amount*0.2;
        cout<<disAmount;
    }
    else if(amount>= 2000 && amount<5000){
        disAmount = amount - amount*0.1;
        cout<<disAmount;
    }
    else if(amount<2000){
        disAmount = amount - amount*0.05;
        cout<<disAmount;
    }
    return 0;
}