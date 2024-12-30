#include<iostream>
using namespace std;
/*
class add
{
	int a=3,b=5,c;
	public :
	  void addition(){
	  c=a+b;
	   cout<<"  addition is --> "<<c<<endl;
		}
		friend class mul;
};

class mul{
	public:
		int multi1;
		void multi(add&a1)
		{
			multi1=a1.a*a1.b;
			cout<<"  mutiplication is --> "<<multi1<<endl<<endl;
		}
};

int main(){
add a1;
mul b1;

//calling multi function
b1.multi(a1);

//calling addition function
a1.addition();
return 0;
}

*/


// friend function
class A{
    int a=0;
    int b=1;
int size;
public:
void input();
friend void fibonacci(A);
};

void A::input(){
    cout<<"ENTER NUMBER --> ";
    cin>>size;
}

void fibonacci(A p){
    int fib;
    cout<<p.a<<" "<<p.b;
    for(int i=0;i<p.size-2;i++){
        fib=p.a+p.b;
        cout<<fib<<" ";
        p.a=p.b;
        p.b=fib;
    }
}

int main() {
A a;
a.input();
fibonacci(a);
}
