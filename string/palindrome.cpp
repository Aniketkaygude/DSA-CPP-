//#include <iostream>
//using namespace std;
//
//char lowercase(char array){
//	if((array>='a'&&array<='z')||(array>='0'&&array<='9')){
//		return array;
//	}
//	else{
//		char temp=array-'A'+'a';
//		return temp;
//	}
//}
//
//
//bool palindrome(char array[],int size){
//int start=0;
//int end=size-1;
//while(start<=end){
//	if(lowercase(array[start])!=lowercase(array[end])){
//		return 0;
//	}
//	else{
//		start++;
//		end--;
//	}
//}
//return 1;
//}
//
//int length(char array[]){
//	int count=0;
//	for(int i=0;array[i]!='\0';i++){
//		count++;
//	}
//	return count;
//}
//
//
//int main(){
//	
//char name[100]={};
//cout<<"ENETER YOUR STRING --> "<<endl;
//cin>>name;
//
//cout<<"YOUR STRING --> "<<name<<endl;	
//
//int len=length(name);
//cout<<"lenght of string--> "<<len<<endl<<endl;
//int p=palindrome(name,len);
//cout<<"palindrom or not--> "<<p;
//}


#include <iostream>

using namespace std;
 
char  lowercase(char array){
    if(array>='a'&& array<='z'||array>='0'&&array<='9'){
        return array;
    }
    else{
        char temp=array -'A'+'a';
        return temp;
    }
}
bool palindrome(char array[],int size){
    int s=0;
   int j=0;
    int e=size-1;
    while(s<=e){
        if(lowercase(array[s])!=lowercase(array[e])){
        	cout<<"not a palindrome "<<endl;
        break;
        }
        else{
            s++;
            e--;
              j++;
        }
    } 
    
if(j!=0){
        cout<<"string is  palibdrome "<<endl;
    }   
}

int length(char array[]){
    int count=0;
    for(int i=0;array[i]!='\0';i++){
        count++;
    }
    return count;
  
}

int main() {
    
    char array[100];
    cin>>array;
    cout<<endl<<endl<<"your array --> "<<array<<endl;
   
  int len= length(array);
  cout<<"lentgh of your string --> "<<len<<endl;
palindrome(array,len);
  
}


























