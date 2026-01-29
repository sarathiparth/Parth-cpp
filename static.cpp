#include<iostream>
using namespace std;

class test{
    private:
    int a;
    int b;

    public:
    static int count;
    void fun(){
        a = 10;
        b = 20;
        count++;
    }

    static int getcount(){
        return count;
    }
};int test::count = 0;



int main(){
    cout<<test::getcount();
    cout<<test::count;
    return 0;

}