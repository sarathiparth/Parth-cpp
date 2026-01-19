#include<iostream>
using namespace std;

int add(int x , int y , int z  = 0){
    return x>y&&x>z ? x:(y>z?y:z);
}

int main(){
    cout<<add(5,6,8);
    return 0;
}