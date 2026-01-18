#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int z[a][b];
    int w[c][d];
    int v[a][d];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> z[i][j];
        }
    }


    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> w[i][j];
        }
    }

    if (b == c) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                v[i][j] = 0;
                for (int k = 0; k < b; k++) {
                    v[i][j] += z[i][k] * w[k][j];
                }
            }
        }


        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication not possible";
    }

    return 0;
}
