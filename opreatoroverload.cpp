#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    Complex add(const Complex& x) {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(8, 3);
    Complex c2(8, 4);
    Complex c3;

    c3 = c1.add(c2);

    c3.display();
    return 0;
}
