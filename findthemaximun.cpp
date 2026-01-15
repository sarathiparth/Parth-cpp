#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = arr[0];

    for (int i = 1; i < n; i++) {
        if (k > arr[i]) {
            k = arr[i];
        }
    }

    cout << "Smallest number is: " << k;

    return 0;
}
