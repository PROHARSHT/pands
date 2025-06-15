// member function of other class as friend function 

#include<iostream>

using namespace std;

class A;
class B{
	public:
		void show(A a1); //function is defined after definition of both class
		//this is very important
		 
		
};

class A{
	private:
		int a ;
	
	protected:
		int b;
	
	public:
	
	A(){a=10;
	b=40;
	
	}	
	
	friend void B::show(A a1);
		
};

void B::show(A a1){
	cout<<"private variable:"<<a1.a<<endl;
	cout<<"protected variable:"<<a1.b;
	
}

int main(){
	A a;
	B b;
	b.show(a);
	
	return 0;
	
}
