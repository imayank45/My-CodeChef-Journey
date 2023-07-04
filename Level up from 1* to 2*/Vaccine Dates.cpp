#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int D,L,R;
	    cin>>D>>L>>R;
	    if(D<L){
	        cout<<"Too Early"<<endl;
	    }else if(D>R){
	        cout<<"Too Late"<<endl;
	    }else{
	        cout<<"Take second dose now"<<endl;
	    }
	}
	return 0;
}
