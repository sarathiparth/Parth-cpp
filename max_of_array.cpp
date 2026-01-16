#include<iostream>
using namespace std;

int main(){
    int x[4] = {1,2,3,4,};
    int k=x[0];
    for(int m : x){
        if(k<m){
            k=m;
        }
    }
    cout<<k;

    return 0;
    
}