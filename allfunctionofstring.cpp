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
    a.append("hello ji");
    cout<<a<<endl;
    a.insert(4,"nahi");
    cout<<a<<endl;
    a.replace(4,6,"nn");
    cout<<a<<endl;
    a.push_back('i');
    cout<<a<<endl;
    a.pop_back();
    cout<<a<<endl;

    return 0;
}