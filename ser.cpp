#include<iostream>
#include<fstream>

using namespace std;

class student{
    public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator <<(ofstream &ofs, student &s) ;
    friend ifstream & operator >>(ifstream &ifs, student &s) ;
};

ofstream &operator <<(ofstream &ofs , student &s){
    ofs<<s.name<<endl<<s.roll<<endl<<s.branch;
    return ofs;
}
ifstream & operator >>(ifstream &ifs, student &s){
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}



int main(){

    student s;
    s.name = "parth";
    s.roll = 22;
    s.branch = "cse";

    ifstream ifs("student.txt");
    ifs>>s;
    cout<<s.name<<endl<<s.roll<<endl<<s.branch;
    ifs.close();

    return 0;
}