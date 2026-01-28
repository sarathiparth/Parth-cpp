#include<iostream>
using namespace std;

class base{
    public:

    base(){
        cout<<"default of base"<<endl;
    }

    base(int m){
        cout<<"param"<<m<<endl;
    }
};

class der : public base{
    public:

    der(){
        cout<<"default of der"<<endl;
    }

    der(int o){
        cout<<"param"<<o<<endl;
    }

    der(int v , int k):base(k){
        cout<<"param"<<v<<endl;
    }
};

int main(){
    der m(10,20);
    return 0;
}