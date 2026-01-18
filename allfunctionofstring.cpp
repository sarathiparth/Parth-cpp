#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string a ;
    getline(cin,a);
    cout<<a.length()<<endl;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    a.resize(50);
    cout<<a.max_size()<<endl;
    a.clear();

    return 0;
}