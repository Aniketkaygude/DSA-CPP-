#include<iostream>
using namespace std;

int main(){
int coloumn =3;
int row=3;
int total=row*coloumn;
int count=0;

int array[row][coloumn]={1,2,3,4,5,6,7,8,9};

//indexes
int firstrow=0;
int lastrow=row-1;
int firstcol=0;
int lastcol=coloumn-1;




while(count<total){
	//for first row
	for(int index =firstcol;count<total &&index<=lastcol;index++ ){
		cout<<array[firstrow][index]<<" ";
		count++;
	}
		firstrow++;
		
		
	//for last coloumn
	for(int index=firstrow;count<total &&index<=lastrow;index++){
		cout<<array[index][lastcol]<<" ";
		count++;
	}
    lastcol--;
    
	//for last row
	for(int index=lastcol;count<total &&index>=firstcol;index--){
		cout<<array[lastrow][index]<<" ";
		count++;
	}
	lastrow--;
	
	//for first coloumn
	for(int index=lastrow;count<total && index>=firstrow;index--){
		cout<<array[index][firstcol];
		count++;
	}
	firstcol++;
}

}










