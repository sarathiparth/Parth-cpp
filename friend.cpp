#include<iostream>
using namespace std;

class complex{
private:
    int real;
    int img;

public:
    complex(int r = 0 , int i = 0){
        real = r;
        img  = i;
    }

    complex add(complex c1 , complex c2){
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img  = c1.img  + c2.img;
        return temp;
    }

    friend ostream& operator<<(ostream &o, complex &c1);
};

ostream& operator<<(ostream &o, complex &c1){
    o << c1.real << " + i" << c1.img;
    return o;
}

int main(){
    complex c1(2,3), c2(4,5), c3;
    c3 = c3.add(c1, c2);
    cout << c3;
    return 0;
}
