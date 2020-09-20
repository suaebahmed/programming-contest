#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const int N=2e6+1;
int n,k;
char c[N];
int main(){
	ios::sync_with_stdio(false);
	cin >> k;
	if(k%2==0 || k%5==0){
		return cout << "-1\n",0;
	}
	int cur=7%k;
	int ans=1;
	while(cur!=0)
    {
		cur=cur*10+7;
		cur%=k;
		ans++;
	}
	cout << ans << endl;
}
