#include<iostream>
using namespace std;

int main(){
    int *p = new int[5];
    p[0] = 2;
    p[1] = 3;

    cout<<p[0]<<endl;
    cout<<p[1];

    delete []p;
    p = nullptr;

    return 0;
}