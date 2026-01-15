#include<iostream>
using namespace std;

int main(){

    int hours;

    cout<<"enter your hours";

    cin>>hours;

    if(hours>=9 && hours<=18){
        cout<<"working hours";
    }
    else{
        cout<<"leisure";
    }

    return 0;

}