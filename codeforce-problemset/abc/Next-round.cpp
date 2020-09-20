#include<bits/stdc++.h>

using namespace std;
#define FOR(i,b,n) for(int i=b; i<n; i++)
#define all(v) (v).begin(),(v).end()

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    FOR(i,0,n) cin>>v[i];

    //sort(all(v));

    int ans = 0;
    FOR(i,0,n)
    {
       if(i<k && v[i]>0) ans++;
       else if(v[i]>0 && v[k-1] == v[i]) ans++;
    }
    cout<<ans<<endl;

    return 0;
}
