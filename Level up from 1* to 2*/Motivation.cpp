#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,x;
	    cin>>n>>x;
	    long long int u=0;
    	for(int i=0;i<n;i++){
    	    long long int s,r;
    	    cin>>s>>r;
    	    if(s<=x){
    	        u = max(u,r);
    	    }
    	}
    	cout<<u<<endl;
	}
	return 0;
}
