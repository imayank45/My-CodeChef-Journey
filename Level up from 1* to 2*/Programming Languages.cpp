#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a == b1 || a == a1) && (b == a1 || b == b1)){
	        cout<<1<<endl;
	    }else if((a == b2 || a == a2) && (b == a2 || b == b2)){
	        cout<<2<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
