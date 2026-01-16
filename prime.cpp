#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 2;
    int count = 0;

    while(i<=n){
        if(n%i == 0){
            count++;
    }
    i++;
}

    if(count>1){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }

    return 0;
}