#include<iostream>
using namespace std;
int main () {
    system("cls");
    // Declare variables
    string studentName, className;
    char gender;
    float math,cpp,eng,avg;

    // input
    cout << "=====Input Student Info====="<<endl;
    cout<<" Enter Name: "; cin>>studentName;
    cout<<"Enter gender:"; cin>>gender;
    cout<<"Enter Classroom:"; cin>>className;
    cout<<"Math Score:";cin>>math;
    cout<<"CPP score:";cin>>cpp;
    cout<<"English Score:"; cin>>eng;

    avg = (math+eng+cpp)/ 3;

    //output
    cout<<"\n=====Output Student Data====="<<endl;
    cout<<"Name:"<<studentName<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"classroom:"<<className<<endl;
    cout<<"Score(math,eng,cpp):"<<math<<","<<eng<<","<<cpp<<endl;
    cout<<"Average is : " <<avg<<endl;
    return 0 ;



}