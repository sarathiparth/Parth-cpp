#include<iostream>
using namespace std;

void fun(){
    static int x = 0;
    int a = 5;
    x++;
    cout<<a<<" "<<x<<endl;
}

int main(){
    fun();
    fun();
    fun();

    return 0;
}