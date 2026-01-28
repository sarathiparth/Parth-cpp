#include<iostream>
using namespace std;

class base{

    public:
    virtual void fun(){
        cout<<"this is base";
    }
};

class der : public base{
    public:
    void fun(){
        cout<<"this is der";
    }
};

int main(){

    der d;

    base *p = &d;
    p->fun();
    return 0;

}