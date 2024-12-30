#include<iostream>
using namespace std;

//VIRTUAL FUNCTION properties
// 1.virtual is a keyword in c++
//2. A VIRTUAL KEYWORD IS REDEFINED IN DERIVED CLASS
//3.WHEN A VIRTUAL FUNCTION IS DEFINED IN BASE CLASS,THEN THE POINTERS TO THE BASE CLASS IS CREATED .NOW ON THE BASIS OF TYPES 
// OBJECT ASSIGNED THE RESPECTIVE CLASS FINCTION IS CALLED


class A{
	public:
	virtual	void f(){

cout<<" A class "<<endl;		}
};

class B:public A{
	public:
	void f(){
			cout<<"B class";
		}
};

int main(){
A*ptr;
A a;
ptr=&a;
ptr->f();

return 0;
}
