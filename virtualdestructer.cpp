#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"this is base construtor"<<endl;
    }
    ~base(){
        cout<<"this is base destructor"<<endl;
    }
};

class der:public base{
    public:
    der(){
        cout<<"this is der constructor"<<endl;
    }
    ~der(){
        cout<<"this is der destructor"<<endl;
    }
};

int main(){
    der d;
    base *ptr = &d;

    

    return 0;
}