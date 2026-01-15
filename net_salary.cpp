#include<iostream>
using namespace std;

int main(){
    float basic_salary;
    float per;
    float dec;
    float net_Salary;
    cout<<"enter your basic salary";
    cin>>basic_salary;
    cout<<"enter percent of allowences";
    cin>>per;
    cout<<"deductions";
    cin>>dec;
    net_Salary = basic_salary+(basic_salary*per)/100 - (basic_salary*dec)/100;

    cout<<net_Salary;

    return 0;
    

}