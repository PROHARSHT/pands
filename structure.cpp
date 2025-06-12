#include<iostream>
#include<cstring>
using namespace std;


//  we have structure without function and with function inside and outside of the structure 
// so there are 3 types of program
// this program is structure without using fuction to take input and display 
// we have one member function 

struct emp{
	string name;
	char f_name[50];
	int salary;
	int sum(int a,int b){	 return a+b;
	}
	
	
}e1,e2;  // here structure variables are created 

int main(){
	//giving values by programmer
	e1.name="Harsh";
	strcpy(e1.f_name,"Hari");
	e1.salary=50000;

	cout<<e1.sum(5,5);
	
	
	cout<<e1.name<<endl;
	cout<<e1.f_name<<endl;
	cout<<e1.salary<<endl;
	
	//giving input from user
	cout<<"Enter name and father name:"<<endl;
	cin>>e2.name>>e2.f_name;
	cout<<"enter salary:"<<endl;
	cin>>e2.salary;
	cout<<e2.name<<"  "<<e2.f_name<<"  "<<e2.salary;
	cout<<"  "<<endl;
	cout<<e2.sum(e2.salary,2000);
	
	
	
	
	
	return 0;
}
