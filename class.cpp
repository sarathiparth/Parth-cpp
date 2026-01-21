#include<iostream>
using namespace std;

class rectangle{
    public :
    int lenght;
    int breath ;

    int area(){
        return lenght*breath;
    }

    int peri(){
        return 2*(lenght*breath);
    }
};

int main(){
    rectangle r1;
    r1.lenght = 10 ;
    r1.breath = 15;

    cout<<r1.area()<<endl;
    cout<<r1.peri();

    rectangle r2;
    r2.lenght = 99;
    r2.breath = 89;
    cout<<r2.area()<<endl;
    cout<<r2.peri();

    return 0;
}