#include<iostream>
using namespace std;

int search(int A[], int n , int key){
    for(int i = 0 ; i < n ; i++){
        if(key==A[i]){
            return i;
        }
    }
    return -1;

}

int main(){
    int B[8] = {1,2,3,54,56,78,5,3,};
    cout<<search(B,8,54);
    return 0; 
}