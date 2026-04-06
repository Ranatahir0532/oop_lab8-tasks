#include<iostream>
using namespace std;
class LibraryBook{
	string title;
	bool issued=false;
public:
	LibraryBook(string n=""):title(n){}
	friend class Librarian;
};
class Librarian{
	string name;
public:
	Librarian(string n=""):name(n){
	}
	void issueBook(LibraryBook B){
		if(B.issued==false){
			B.issued=true;
			cout<<"The Book \""<<B.title<<"\" has been issued to you!"<<endl;
		}
		else{
			cout<<"Sorry!The book is already issued to someone else."<<endl;
		}
	}
	void returnBook(LibraryBook B){
		B.issued=false;
		cout<<"Book returned Sucessfully!"<<endl;
	}
};
int main(){
	LibraryBook B1("The jungle Book");
	Librarian L1("Javed Iqbal");
	L1.issueBook(B1);
	L1.returnBook(B1);
}
