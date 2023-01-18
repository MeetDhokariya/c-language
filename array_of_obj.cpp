#include<iostream>
using namespace std;

class Student {
	
	public:
		char name[50],surname[50],std[50];
		
		void setname() {
			cout<<"Enter Name : ";
			gets(name);
		}

		void setsurname() {
			cout<<"Enter Surname : ";
			gets(surname);
		}	
		
		void setstd() {
			cout<<"Enter STD : ";
			gets(std);
		}
		
		void getname() {
			cout<<"Name : "<<name<<endl;
		}
		
		void getsurname() {
			cout<<"Surname : "<<surname<<endl;
		}
		
		void getstd() {
			cout<<"Std : "<<std<<endl;
		}
};
main() {	
	Student s[5];
	int i;
	for(i=0 ; i<5 ; i++) {
		s[i].setname();
		s[i].setsurname();
		s[i].setstd();
	}
	for(i=0 ; i<5 ; i++) {
		cout<<"\n=================\n";
		s[i].getname();
		s[i].getsurname();
		s[i].getstd();
	}
}



