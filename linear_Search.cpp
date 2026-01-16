#include<iostream>
using namespace std;

int main(){
    int n[5] = {1,2,3,4,5};
    int key ;
    cin>>key;

    for(int i = 0 ; i<5 ;i++){
        if(n[i] == key){
            cout<<i;
        }
    }

    return 0;
}