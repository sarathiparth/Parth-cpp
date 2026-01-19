#include<iostream>
using namespace std;


int add(int x , int y){
    int z;
    z = x + y ;
    return z;
}

int Max(int a,int b,int c){

{if(a>b && b>c){
    return a;
}
else if(c>b){
    cout<<c;
}
else{
    return b;
}
}}

int main()
{
    cout<<add(10,5);
    cout<<Max(7,10,5);

    return 0;
}