#include<iostream>
using namespace std;


//class count{
//	
//	int b;
//	public:
//	void input();
//	friend void print(count);
//	
//};
//
//void count::input(){
//	cout<<"enter number --> "<<endl;
//	cin>>b;
//}
//
//void print(count obj){
//	for(int i=0;i<obj.b;i++){
//		cout<<i<<" ";
//	}
//}
//int main(){
//	count d;
//d.input();
//print(d);
//}



class hero {
	
	int roll;
	public:
	int function(){
		cin>>roll;
	}
	
	friend class villen;
};

class villen{
	public:
	int function1(hero obj){
		cout<<obj.roll;
	}
};

int main(){
	hero a;
	a.function();
	villen b;
	b.function1(a);
}

















