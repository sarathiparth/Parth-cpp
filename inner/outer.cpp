#include<iostream>
using namespace std;

class outer{
    public:

    void fun(){
        i.display();
    }


    class inner{
        public:
        void display(){
            cout<<"this is display of inner";
        }
    };

    inner i;
};