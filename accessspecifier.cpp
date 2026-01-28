#include<iostream>
using namespace std;

class base{
private:
    int a;
protected:
    int b;
public:
    int c;

    base() {
        a = 1;
        b = 2;
        c = 3;
    }
};

class der : public base{
public:
    void setValues() {
        b = 20;   // allowed: b is protected
        c = 30;   // allowed: c is public
    }

    void show() {
        cout << b << endl;
        cout << c << endl;
    }
};

int main(){
    base lol;
    lol.c = 21;     // allowed: public member

    der lo;
    lo.setValues(); // modifying protected/public via member function
    lo.show();      // accessing protected/public correctly

    return 0;
}
