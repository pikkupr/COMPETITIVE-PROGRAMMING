#include <iostream>

using namespace std;
#define MAX 100005

int main(){
   int n,arr[MAX],aux[MAX],flag;
   cin>>n;
   while(n!=0){
       for(int i=1;i<=n;i++){
            cin>>arr[i];
            aux[arr[i]]=i;
       }
        flag=1;
        for(int i=1;i<=n;i++)
            if(arr[i]!=aux[i]){
                flag=0;
                break;
            }
        if(flag)
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";
        cin>>n;        
   }
   
   return 0;
}


