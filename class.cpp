#include<iostream>
#include<cstring>

using namespace std;


 class stdu{ 
// default private data members

 int roll;
 string name;


 public:


 	void getdata(){
 		cout<<"enter roll no:"<<endl;
 		cin>>roll;
 		cout<<"enter name:"<<endl;
 		cin>>name;
 		
	 }



    void putdata(){
    	cout<<roll<<" "<<name;
    	
	}
 
 };
 
 
 int main(){

 	stdu s1;
 	s1.getdata();
 	s1.putdata();


 	return 0;
 	
	
}
