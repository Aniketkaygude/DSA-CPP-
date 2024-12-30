#include<iostream>
using namespace std;

int main(){

int num =52;

int *ptr=&num;

cout<<"Address of num --> "<<&num<<endl;
cout<<"Addess of pointer --> "<<ptr<<endl<<endl;

cout<<"value of num --> "<<&num<<endl;
cout<<"value of pointer --> "<<*ptr<<endl<<endl;

cout<<"size of num --> "<<sizeof(num)<<endl;
cout<<"size of pointer --> "<<sizeof(ptr)<<endl<<endl;

int *p1=&num;
int a=*p1;
a++;
cout<<" value of *p1--> "<<*p1<<endl<<"address of p1 ->> "<<&p1<<endl<<endl;

int *p2=&num;
cout<<" BEFORE --> "<<*p2<<endl;
(*p2)++;
cout<<"AFTER --> "<<*p2<<endl<<endl;

// COPYING POINTER 

int *p3=p2;
cout<<" address of p2--> "<<p2<<endl;
cout<<" address of p3 --> "<<p3<<endl;

cout<<" value of p2--> "<<*p2<<endl;
cout<<" value of p3 --> "<<*p3<<endl<<endl;

//pointers arithmatic
int i=3;
int *t=&i;
(*t)++;
cout<<*t<<endl;

cout<<"BEFORE --> "<<t<<endl;
(t)++;
cout<<" after --> "<<t;



return 0;
}
