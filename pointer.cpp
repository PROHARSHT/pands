#include<iostream>
using namespace std;

int main(){
	int a=10;
	int *p1=&a;  // pointer is created and address of a is assigned to pointer variable p1
	// it means that pointer is declared and defined in one line
	
	
	cout<<a<<endl;
	cout<<*p1<<endl;
	cout<<p1<<endl;
	
	cout<<endl;
	cout<<endl;
	
	
	int *p2; //declaring pointer
	p2=&a; // defining pointer
	
	
	//*p2=&a; invalid 
	
	cout<<p2<<endl;
	cout<<*p2;
	
}
