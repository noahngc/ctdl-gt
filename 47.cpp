#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a=n%7;
		if(a==0){
		for(int i=0;i<n/7;i++){
			cout<<7;
		}
		cout<<endl;	
		}else{
			while(a<=n&&a%4!=0){
				a+=7;
			}
			if(a>n){
				cout<<-1<<endl;
			}else{
				for(int i=0;i<a/4;i++){
					cout<<4;
				}
				for(int i=0;i<(n-a)/7;i++){
					cout<<7;
				}
				cout<<endl;
			}
		}
	}
}
