#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string name;
	char nam[50];
	name="Hari";
	strcpy(nam,"har_har");
	cout<<name<<" "<<nam;
	// now taking input from user
	
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter nam:"<<endl;
	cin>>nam;
	cout<<name<<" "<<nam;
	
	return 0;
}
