#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a,b,c,d;
    float roots_1 , roots_2;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;

    d = ((b*b) - 4*a*c);

    if(d > 0){
        cout<<"roots exist and not equal";
         roots_1 = (-b + sqrt(d))/(2*a);
         roots_2 = (-b - sqrt(d))/(2*a);

         cout<<roots_1;
         cout<<roots_2;
    }

    else if(d < 0){
        cout<<"roots are imaginary";
    }

    else{
        cout<<"roots are equal";
        roots_2 = (-b - sqrt(d))/(2*a);
        cout<<roots_2;
    }

    return 0;


}