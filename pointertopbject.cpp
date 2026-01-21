#include<iostream>
using namespace std;

class rect{
    public:
    int breath;
    int lenght;

    int area(){
        return lenght*breath;
    }

    int peri(){
        return 2*(lenght+breath);
    }

};

int main(){
    rect *p =  new rect;
    p->lenght = 5;
    p->breath = 20;
    cout<<p->area()<<endl;
    cout<<p->peri();

    return 0;
}