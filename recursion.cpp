#include<iostream>
using namespace std;

int fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
    }
}

int main(){
    fun(5);
    return 0;
}