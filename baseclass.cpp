#include<iostream>
using namespace std;

class base{
    public:
    void fun(){
        cout<<"base"<<endl;
    }
};

class der :  public base{
    public:
    void fun1(){
        cout<<"der"<<endl;
    }
};

int main(){
    der d;
    base *ptr = &d;
    ptr->fun();
    return 0;
}