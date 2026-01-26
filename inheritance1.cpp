#include<iostream>
using namespace std;

class rectangle{

    private :
    int lenght;
    int breath;

    public :
    rectangle(int l = 0 ,int b = 0){
        lenght = l;
        breath = b;
    }

    int getlenght(){
        cout<<lenght<<endl;
    }

    int getbreath(){
        cout<<breath<<endl;
    }

    void setlenght(int l){
        lenght = l;
    }

    void setbreath(int b){
        breath = b;
    }

    int area(){
        return breath*lenght;
    }

    int peri(){
        return 2*(lenght+breath);
    }
};

int main(){
    rectangle c;
    c.setbreath(4);
    c.setlenght(5);

    c.getbreath();
    c.getlenght();

    cout<<c.area()<<endl;
    cout<<c.peri();

    return 0;
}