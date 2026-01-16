#include<iostream>
using namespace std;

int main(){
    int arr[10] = {6,8,13,17,20,22,25,28,30,35};
    int l , h ;
    int key;
    cin >> key;

    l = 0;
    h = 9;

    if(l <= h){
        while(l <= h){

            int mid = (l + h) / 2; 

            if(key == arr[mid]){
                cout << "element found";
                break;              
            }
            else if(key > arr[mid]){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }

        if(l > h){
            cout << "element not found"; 
        }
    }

    return 0;
}
