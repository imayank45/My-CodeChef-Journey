#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int temp1=0,temp2=0;
	    if(a >= b & a >= c){
	        temp1 = a;
	    }else if(b >= a && b >= c){
	        temp1 = b;
	    }else{
	        temp1 = c;
	    }
	    if(temp1 == a){
	        temp2 = max(b,c);
	    }else if(temp1 == b){
	        temp2 = max(a,c);
	    }else{
	        temp2 = max(a,b);
	    }
	    cout<<temp1+temp2<<endl;
	}
	return 0;
}
