#include <iostream>
using namespace std;

int main() {
    float a, v, u;
    float distance;

    cin >> a >> v >> u;

    if (a == 0) {
        cout << "Acceleration cannot be zero";
        return 0;
    }

    distance = (v * v - u * u) / (2 * a);
    cout << distance;

    return 0;
}
