#include<bits/stdc++.h>
using namespace std;
int v;
int find(int a, int parent[]){
	if(parent[a]==a) return a;
	return parent[a];
}
void hopnhat(int a,int b,int parent[]){
	parent[b]=a;
}
int chutrinh(int a,int b,int parent[]){
	if(find(a,parent)==find(b,parent)) return 1;
	hopnhat(a,b,parent);
}
int main(){
	int t; cin>>t;
	while(t--){
		int e; cin>>v>>e;
		int parent[v+1];
		for(int i=1;i<=v;i++){
			parent[i]=i;
		}
		int ok=0;
		for(int i=0;i<e; i++){
			int a,b; cin>>a>>b;
			if(chutrinh(a,b,parent)){
				ok=1;
				break;
			}
		}
		if(ok==0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
