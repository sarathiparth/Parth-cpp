#include<iostream>
using namespace std;

int main(){
    int x[4] = {1,2,3,4,};
    int sum = 0;
    for(int m : x){
        cout<<m<<endl;
        sum+=m;
    }
    cout<<sum;

    return 0;
    
}