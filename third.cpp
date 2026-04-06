#include<iostream>
using namespace std;

class Person{
public:
    int id;
    string name;

    Person(int i,string n){
        id=i;
        name=n;
    }
};

class Student:virtual public Person{
public:
    float gpa;

    Student(int i,string n,float g):Person(i,n){
        gpa=g;
    }
};

class Employee:virtual public Person{
public:
    float salary;

    Employee(int i,string n,float s):Person(i,n){
        salary=s;
    }
};

class TeachingAssistant:public Student,public Employee{
public:
    TeachingAssistant(int i,string n,float g,float s)
    :Person(i,n),Student(i,n,g),Employee(i,n,s){}

    void show(){
        cout<<id<<" "<<name<<" "<<gpa<<" "<<salary<<endl;
    }
};

int main(){
    TeachingAssistant t(1,"Ali",3.8,50000);
    t.show();
}
