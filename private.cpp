#include<iostream>
using namespace std;

class rect{
    private:
    int b ;
    int l ;
    public:
    void getL(int x){
        l = x;
    }
    void getB(int y){
        b = y;
    }
    int dl(){
        return l;
    }
    int db(){
        return b;
    };

    int area(){
        return l*b;
    };

    int peri(){
        return 2*(l+b);
    }
};

int main(){
    rect x;
    x.getL(10);
    x.getB(15);

    cout<<x.area()<<endl;
    cout<<x.peri();

    return 0;

}