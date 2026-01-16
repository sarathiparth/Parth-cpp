#include<iostream>
using namespace std;

int main(){
    int n , m , sum=0;
    cin>>n;
    int r;
    m=n;

    while(n>0){
        r = n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if(sum == m){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }

    return 0;
}