#include<iostream>
#include<string>
using namespace std;

int main(){
    char s[100], a[100], x[100], k[100];

    cout << "enter your name: ";
    cin.getline(x,100);

    cout << "enter your name again: ";
    cin.getline(k,100);

    cout << "enter your name: ";
    cin.get(s,100);
    cin.ignore();   // clears the leftover '\n'

    cout << "enter your name again: ";
    cin.get(a,100);

    return 0;
}
