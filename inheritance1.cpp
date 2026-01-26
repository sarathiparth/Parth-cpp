#include<iostream>
using namespace std;

class rectangle {

private:
    int lenght;
    int breath;

public:
    rectangle(int l = 0, int b = 0) {
        lenght = l;
        breath = b;
    }

    int getlenght() {
        return lenght;
    }

    int getbreath() {
        return breath;
    }

    void setlenght(int l) {
        lenght = l;
    }

    void setbreath(int b) {
        breath = b;
    }

    int area() {
        return breath * lenght;
    }

    int peri() {
        return 2 * (lenght + breath);
    }
};

class cuboid : public rectangle {

private:
    int height;

public:
    cuboid(int l = 0, int b = 0, int h = 0) : rectangle(l, b) {
        height = h;
    }

    int getheight() {
        return height;
    }

    void setheight(int h) {
        height = h;
    }

    int volume() {
        return getlenght() * getbreath() * height;
    }
};

int main() {

    rectangle c;
    c.setbreath(4);
    c.setlenght(5);

    cout << c.getbreath() << endl;
    cout << c.getlenght() << endl;
    cout << c.area() << endl;
    cout << c.peri() << endl;

    cuboid cb(4, 5, 6);
    cout << cb.volume() << endl;

    return 0;
}
