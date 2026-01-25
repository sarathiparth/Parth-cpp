#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
    complex(int r = 0 , int i = 0 ){
        real = r;
        img = i;
    }

    complex add(complex x){
        complex temp ;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    complex operator -(complex x){
        complex temp ;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void display(){
    cout<<real<<"+i"<<img;
}
};

int main(){
    complex c(1,2);
    complex m(3,5);
    complex z;

    z = c-m;
    z = c.add(m);

    z.display();

    return 0;
    

}
