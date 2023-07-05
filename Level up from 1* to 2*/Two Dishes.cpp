#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if(n>b){
	        cout<<"NO"<<endl;
	    }else if((a+c)>=n){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
