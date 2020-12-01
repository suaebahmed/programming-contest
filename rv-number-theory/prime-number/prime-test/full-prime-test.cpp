#include <iostream>
using namespace std;
/**
3
53 => Yes
41 => No
31 => No
2
22 => No
50 => No
*/

bool isFullPrime(int x){
    int n,prime = x;
    //check every digit of the given number is prime or not
    while(x>0){
        n = x%10;
        x/=10;
        if(n==1 || n==0) return 0;
        for(int i=2; i*i<=n; i++){
    	   if(n%i==0){
    	       return 0;
    	   }
        }
    }
    //check the given number is prime or not
    if(prime==1 || prime==0) return 0;
    for(int i=2; i*i<=prime; i++){
        if(prime%i==0){
    	  return 0;
    	}
    }
    return 1;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool ans = isFullPrime(n);
	    if(ans) cout<<"Yes"<<endl;
	    else cout<<"No\n";
	}
	return 0;
}
