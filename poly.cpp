#include<iostream>
using namespace std;

class car{
    public:
    virtual void start(){
        cout<<"car is started";
    }
    virtual void stop(){
        cout<<"car is stopped";
    }
};

class innova : public car{
    public:
    void start(){
        cout<<"innova is started";
    }
    void stop(){
        cout<<"innova is stopped";
    }
};

class toyota : public car{
    public:
    void start(){
        cout<<"toyota is started";
    }
    void stop(){
        cout<<"toyota is stopped";
    }

};

int main(){
    car *p = new innova();
    p->start();
    return 0;
}