#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long ll;
vector<int> v;
const int MAXN = 50+5;
int a[MAXN];

int main(){

    int n;
    cin>>n;
    int ans = 0;
    map<int,int> mp;

    FOR(i,0,n-1)
    {
        int x;
        cin>>x;
        ans = max(ans,++mp[x]);
    }
    cout<<ans<<endl;
    return 0;
}
