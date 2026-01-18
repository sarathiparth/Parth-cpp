#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    string nme="parth";
    cin.getline(b,100);
    cin.getline(a,100);
    cin.getline(c,100);
    cin.getline(d,100);
    cout<<strlen(a)<<endl;
    cout<<strnlen(a,3)<<endl;
    cout<<strcmp(a,b)<<endl;
    cout<<strcpy(b,a)<<endl;
    cout<<strtol(c,NULL,10)<<endl;
    cout<<strtof(d,NULL)<<endl;
    cout<<strcmp(a,b)<<endl;
    return 0;
    
}