#include<iostream>
#include<cstring>
using namespace std;

// friend function globally

class A{
	private:
		int a;
	
	protected :
		int b;
		
	public:
		A(){
		a=10;
		b=20;
		}
	
	friend void show(A a1);
	
};


void show(A a1){
	cout<<"private member:"<<a1.a<<endl;
	cout<<"protected member:"<<a1.b;
	
}


int main(){
	A a;
	show(a);
	return 0;
	
}
