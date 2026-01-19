#include<iostream>
using namespace std;

template<class T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax(12.5f, 54.33f) << endl;
    cout << myMax(13, 5);

    return 0;
}
