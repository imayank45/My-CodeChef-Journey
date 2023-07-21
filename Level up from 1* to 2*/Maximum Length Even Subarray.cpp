#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int r=1;
	    for(int i=2;i<=n;i++){
	        r += i;
	    }
	    if(r%2 != 0){
	        r -= 1;
	        if(r%2 != 0){
	            r -= 1;
	            cout<<n-2<<endl;
	        }else{
	            cout<<n-1<<endl;
	        }
	    }else{
	        cout<<n<<endl;
	    }
	}
	return 0;
}
