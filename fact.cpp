#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin>>n;
    int fact = 1;

    while(i<=n){
        fact *=i;
        i++;
    }
    cout<<fact;

    return 0;

}