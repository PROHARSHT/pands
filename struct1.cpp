// nested structure
#include<iostream>
#include<cstring>
using namespace std;

struct em{
	int id;
	char name[40];
	
};
struct org{
	char org_name[30];
	struct em e;
};

// another way to create nested structure

struct school{
	string sc_name;
	
	struct clas{
		string section;
		
	}c;
};





int main(){
	org o;
	strcpy(o.org_name,"Vedanta \n");
	cout<<o.org_name;
	
	int a=o.e.id=5;
	cout<<a<<endl;
	
	school s;
	
	
	string sec=s.c.section="A";
	cout<<sec<<endl;
	s.sc_name="KV";
	cout<<s.sc_name;
	
	
	
	
}
