#include<iostream>
using namespace std;

/*
int main(){
	
	int value;
	cout<<"enter the value -> ";
	cin>>value;
	
	if(cin.good()==0){
		cout<<"incorrect input"<<endl;
		cout<<"the good() function returns "<<cin.good()<<endl;
		cin.clear();
	}
	else{
		cout<<"correcct input"<<endl;
		cout<<"good function returns "<<cin.good();
	}
	
}

*/

#include<iostream>
#include<fstream>
using namespace std;
#include<process.h>

int main(int argc,char *argv[]){
    if(argc!=2){
    cerr<<"file name is missing "<<endl;
    exit(-1);
    }
    char ch;
    ifstream in_file;
    in_file.open(argv[1]);
    cout<<"content of files "<<argv[1]<<" are"<<endl;
    while(in_file.get(ch)==0){
        cout<<ch;
    }
    
    
}

















