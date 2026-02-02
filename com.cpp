#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"default base"<<endl;
    }
    base(int x){
        cout<<"pari base"<<x<<endl;
    }
};

class der : public base{
    public:
    der(){
        cout<<"default der"<<endl;
    }
    der(int m){
        cout<<"pari der"<<m<<endl;
    }
    der(int v , int k):base(k){
        cout<<"param"<<v<<endl;
    }
};

int main(){
    der m(10,90);
    return 0;
}