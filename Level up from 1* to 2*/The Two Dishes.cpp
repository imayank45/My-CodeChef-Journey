#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    if(s == n){
	        cout<<s<<endl;
	    }else if(s < n){
	        cout<<s<<endl;
	    }else{
	        cout<<n-abs(n-s)<<endl;
	    }
	}
	return 0;
}
