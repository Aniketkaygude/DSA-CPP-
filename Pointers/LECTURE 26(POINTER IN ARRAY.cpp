#include<iostream>
using namespace std;

int main(){ 
/*
int array[10]={0,2,3,4};

// printing address of 0th index
// name of array represent addres of 0th element
cout<<"address --> "<<array<<endl;
cout<<" Address --> "<<&array[0]<<endl;
cout<<" Address  --> "<<*array<<endl;

cout<<"value at 1st index--> "<<*array+1<<endl;
cout<<"value at 2st index--> "<<*array+2<<endl;
cout<<"value at 3st index--> "<<*array+3<<endl;

// formula or internal working of array
// array[i] = *(array + i)
// i[array] =*(i+array)
int i=3;
cout<<i[array]<<endl<<endl;



int temp[10]={1,3,4,5};
cout<<sizeof(temp)<<endl;
cout<<"1st "<<sizeof(&temp)<<endl;
cout<<"2nd "<<sizeof(*temp)<<endl<<endl;


int *ptr =&temp[0];
cout<<sizeof(ptr)<<endl;
cout<<"1st "<<sizeof(&ptr)<<endl;
cout<<"2nd "<<sizeof(*ptr)<<endl;



int a[20]={14 ,2,3,4};
cout<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl<<endl<<endl;

int *p=&a[0];
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl<<endl;
*/

int arr[10];
int *ptr=&arr[0];

cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr;








return 0;
}
