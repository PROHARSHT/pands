
#include<iostream>
#include<cstring>

using namespace std;

class A{
	private:
		int roll;
		string name;
		
	public:
		int id;
		
		
		// defining member function inside the class
		void get_data(){
			cout<<"enter roll no:"<<endl;
			cin>>roll;
			cout<<"enter name"<<endl;
			cin>>name;
		}
		
		
		//declaring the function
		 
		void put_data();
		
};

// defining memeber function outside the class 

void A::put_data(){
	cout<<"roll no:"<<roll<<endl;
	cout<<"name:"<<name<<endl;
	
}


int main(){
	A a;
	a.get_data();
	a.put_data();
	a.id=10;
	cout<<a.id;
	
	
	
	
	
	
	return 0;
}




