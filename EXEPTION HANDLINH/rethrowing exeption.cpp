// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
/*
void divide (int a,int b){
    int c;
    try{
        if(b!=0){
            c=a/b;
            cout<<"division is -> "<<c<<endl;
        }
        else{
            throw b;
        }
        
    }
    catch(int b){
        cout<<"exection in function b == "<<b<<endl;
        throw;
    }
}

int main() {
try{
    int a,b;
   cout<<"enter first number -> ";
   cin>>a;
   cout<<"enter second number -> ";
   cin>>b;
    divide(a,b);
}
catch(int B){
    cout<<"exception in int main() ";
}

}
*/

//EXCEPTION SPECIFICATION

void show() throw(int,double){
    throw(1.22121);
}


int main() {
    try{
       
        show();
    }
    catch(int a){
    cout<<"interger exception -> "<<endl;
    }
     catch(double a){
    cout<<"double exception -> "<<endl;
        
    }
     catch(...){
    cout<<" exception of unknown type -> "<<endl;
        
    }
    
    
}







