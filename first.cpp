#include<iostream>
using namespace std;
class student{
	string name;
	int marks[3];
	int count=0;
public:
	student(string n=""):name(n),count(0){
	}
	void addmarks(int M){
		if(count<=2){	
		marks[count++]=M;
	}
	else{
	cout<<"Error!All marks uploaded!"<<endl;
	}
	}
	friend double calculateAvg(student S);
};
double calculateAvg(student S){
	int Total=0;
	for(int i=0;i<=S.count;i++){
		Total+=S.marks[i];
	}
	return Total/S.count;
}
int main(){
	student s1("tahir hussain");
	s1.addmarks(100);
	s1.addmarks(80);
	s1.addmarks(90);
	s1.addmarks(120);
	cout<<"Avg of Student 1 is "<<calculateAvg(s1)<<"."<<endl;
}
