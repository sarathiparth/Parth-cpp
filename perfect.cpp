#include<iostream>
using namespace std;

int main(){

    int n,i;
    cin>>n;
    i=1;
    int sum=0;


    while(i<=n){
        if(n%i==0){
            sum +=i;
        }
        i++;
    }

    if(sum==2*n){
        cout<<"perfect number";
    }
    else{
        cout<<"not a perfect number";
    }

    return 0;
}