#include<iostream>
using namespace std;

int main(){
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    int total = m1+m2+m3;
    int avg = total/300;
    if(avg>=60){
        cout<<"a";
    }
    else if(avg<=35){
        cout<<"c";
    }
    else if(avg>60){
        cout<<"b";
    }
    return 0;
}