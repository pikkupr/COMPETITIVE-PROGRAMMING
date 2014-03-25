#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(){
	int t,i,j;
	char s1[1001],s2[1001];
	cin>>t;
	while(t){
		cin>>s1>>s2;
		int a=0,b=0;
		for(i=0;s1[i]!='\0';i++)
			a+=pow(10,i)*(s1[i]-'0');
		for(i=0;s2[i]!='\0';i++)
			b+=pow(10,i)*(s2[i]-'0');
		a = a+b;
		while(a%10==0&&a!=0)
			a=a/10;
		while(a){
			cout<<a%10;
		a=a/10;
		}
		cout<<'\n';
		--t;
	}
	return 0;
}
