#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string k;
		int c=1;
		int du=n%7;
		if(du==0){
			k=string(n/7,'7');
		}else{
			while(du<=n&&du%4!=0){
				du=du+7;
			}
			if(du>n){
				c=0;
			}else{
				k=string(du/4,'4');
				k=k+string((n-du)/7,'7');
			}
		}
		if(c==1){
			cout<<k<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t; cin>>t;
//	while(t--){
//		int n; cin>>n;
//		int a=n%7;
//		if(a==0){
//		for(int i=0;i<n/7;i++){
//			cout<<7;
//		}
//		cout<<endl;	
//		}else{
//			while(a<=n&&a%4!=0){
//				a+=7;
//			}
//			if(a>n){
//				cout<<-1<<endl;
//			}else{
//				for(int i=0;i<a/4;i++){
//					cout<<4;
//				}
//				for(int i=0;i<(n-a)/7;i++){
//					cout<<7;
//				}
//				cout<<endl;
//			}
//		}
//	}
//}
