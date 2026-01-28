#include<iostream>
using namespace std;

class der;   

class base {
private:
    int a = 15;
    friend class der;  
};

class der {
    base c;
public:                
    void fun() {        
        cout << c.a;
    }
};

int main() {
    der o;
    o.fun();
    return 0;
}
