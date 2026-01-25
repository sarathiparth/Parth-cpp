#include<iostream>
using namespace std;

class test {
    public :
    void fun(){
        cout<<"inline"<<endl;
    }

    inline void fun1();
};

void test::fun1(){
    cout<<"not inline";
}

int main(){
    test t;
    t.fun();
    t.fun1();

    return 0;
}