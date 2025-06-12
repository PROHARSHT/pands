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


int main(){
	org o;
	strcpy(o.org_name,"Vedanta");
	cout<<o.org_name;
}
