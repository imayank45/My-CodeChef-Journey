#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    float r = sqrt((u*u)-(2*a*s));
	    if(r > v){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
