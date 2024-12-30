#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


struct Client
{
	string name;
	int phonenumber;	
};


class Hashtable{
	public:
		
	static const int size = 10;
	Client table[size];
	int collisions[size];
	
	int hash(int key){
		return key %10;
	}
	
    Hashtable(){
    	for(int i = 0 ; i<size ;i++){
    		collisions[i]=0;
		}
	}
	
	
	void linearprobing(Client client){
		int index = hash(client.phonenumber);
		int count = 0 ;
		while(collisions[index]!=0){
			count++;
			index++;
		}
		
		table[index]= client;
		collisions[index] = 1;
		cout<<"inserted "<<client.name<<"'s phone number after "<<count << " number of collisions using linear probing ,"<<endl; 
	}
		
};


int main(){
	Hashtable ht;
	int number;
	
	 string name;
	int i =0 ;
	while(i!=4){
		cout<<"enter the number --> ";
		cin>>number;
		cout<<"enter the name --> ";
		cin>>name;
		ht.linearprobing({name,number});
		i++;
	}
	
}























