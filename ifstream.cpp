#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream of;

    of.open("my.txt");
    if(!of){
        cout<<"file cant be opened";
    }

    string str;
    int x;
    of>>str;
    of>>x;
    cout<<str<<" "<<x;
    if(of.eof()){
        cout<<"end of file";
    }
    of.close();

    
    return 0;
}
