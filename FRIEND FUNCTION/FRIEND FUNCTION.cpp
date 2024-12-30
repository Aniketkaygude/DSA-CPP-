#include<iostream>
using namespace std;
//friend function
// 1. A FRIEND FUNCTION CANT BE CALLED USING THE OBJECT OF THE CLASS
// 2. IT IS CALLED LIKE NORMAL FUNCTION
// 3. FRIEND FUNCTION CAN USE THE RESOURCES OF AN CLASS ONLY USING AN OBJECT OF SAME CLASS;
// 4. FRIEND FUNCTION HAS OBJECT AS AN ARGUMENT


class hero{
	int health;
	char level;
	int a,b;
	
	public:
	hero(){
		health=240;
		level='A';
		a=52;
		b=51;
	}
	
	friend class villen;
};

class villen{
	public:
		void function(hero & obj){
			cout<<"HEALTH OF HERO --> "<<obj.health<<endl<<endl;
			cout<<"LEVEL OF HERO --> "<<obj.level<<endl<<endl;
			cout<<"ADDITION --> "<<obj.a+obj.b<<endl<<endl;
			cout<<"SUBTRACTION --> "<<obj.a-obj.b<<endl<<endl;
			
		}
};
int main(){
hero Ak;
villen B;
B.function(Ak);


return 0;
}
