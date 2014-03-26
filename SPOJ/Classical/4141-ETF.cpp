#include <iostream>

using namespace std;
#define MAX 1000002

int phi[MAX];
void genPhi(){
    for(int i=0;i<MAX;i++)
        phi[i]=i;
    for(int i=2;i<MAX;i++)
        if(phi[i]==i)
            for(int j=i;j<MAX;j+=i)
                phi[j] = phi[j]/i*(i-1);
}    

int main(){
    genPhi();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<phi[n]<<'\n';
    }
   return 0;
}
