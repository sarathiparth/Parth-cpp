#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int y;
    cin >> y;

    while(x!=y){
        if(x>y){
            x-=y;
        }
        else{
            y-=x;
        }
    }

    cout<<x;

    return 0;
    
}