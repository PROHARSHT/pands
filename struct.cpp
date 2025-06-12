// structure programm in which we create structure variable inside main function
#include<iostream>
#include<cstring>
using namespace std;

struct st{
	int roll ;
	char name[40];
	void get_data()
	{cout<<"enter roll no"<<endl;
	cin>>roll;
	cout<<"enter name"<<endl;
	cin>>name;
	
	}
	void put_data()
	{
	cout<<"roll no"<<roll<<endl;
	cout<<"name"<<name<<endl;
	
	}
};


void show(st &s){
	cout<<"accessing values of structure by function outside of the structure "<<endl;
	s.get_data();
	s.put_data();
}

int main(){
	struct st a;
	show(a);
	return 0;
}
