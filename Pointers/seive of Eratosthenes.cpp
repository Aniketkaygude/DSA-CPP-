
#include <iostream>

using namespace std;

void prime(int n){
    int array[100]={0};
    
    for(int i=2;i<=n;i++){
        if(array[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                array[j]=1;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(array[i]==0){
            cout<<i<<" ";
        }
    }
    
}

int main()
  {
      int a;
      cout<<"ENTER NUMBER --> ";
    cin>>a;
    prime(a);
    

    return 0;
}
