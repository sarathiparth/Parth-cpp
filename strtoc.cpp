#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "welcome";
    char str[10];
    s.copy(str,3);
    str[3] = '\0';
    cout<<str<<endl;
    cout<<s.find("lco")<<endl;
    cout<<s.rfind("e")<<endl;
    cout<<s.find_first_of('l')<<endl;
    cout<<s.find_first_of('e',2)<<endl;
    cout<<s.find_first_of('e',3)<<endl;

    return 0;


}