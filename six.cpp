#include<iostream>
#include<string>
using namespace std;

class person{
protected:
int id;
string name;
public:
    person(int i,string n):id(i),name(n){
    }
    virtual void display(){
    cout<<"ID:"<<id<<endl;
    cout<<"name:"<<name<<endl;
    }
};
class student:virtual public person{
protected:
    double GPA;
public:
    student(int i,string n,double G):person(i,n),GPA(G){
        }
    void display()override{
         cout<<"ID:"<<id<<endl;
         cout<<"name:"<<name<<endl;
        cout<<"GPA:"<<GPA<<endl;
        }

};// virtual must be used in student and 
//employee class to avoid ambiguity error
class employee:virtual public person{
protected:
int salary;
public:
    employee(int i,string n,int s):person(i,n),salary(s){
        }
    void display()override{
         cout<<"ID:"<<id<<endl;
         cout<<"name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
        }
};
class teaching_asistance:public student,public employee{
protected:
    string subject;
public:
  teaching_asistance(int i,string n,double G,int s,string sub):person(i,n), student(i,n,G), employee(i,n,s),subject(sub){
      GPA=G;
      salary=s;
      }
  void display()override{
         cout<<"ID:"<<id<<endl;
         cout<<"name:"<<name<<endl;
        cout<<"GPA:"<<GPA<<endl;
        cout<<"salary:"<<salary<<endl;
        cout<<"subject:"<<subject<<endl;
       
        }
};

int main(){
person *p1,*p2,*p3;
p1=new employee(1002,"tahir",30000);
p2=new student(1001,"alyan",4.0);
p3=new teaching_asistance(1002,"anas",3.9,40000,"english");
p1->display();
p2->display();
p3->display();
}
