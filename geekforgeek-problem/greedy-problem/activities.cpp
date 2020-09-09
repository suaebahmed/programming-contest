#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return (a.second < b.second);
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt = 1;
        cin>>n;
        vector<pair<int,int>> vp(n);
        FOR(i,0,n-1) cin>>vp[i].first;
        FOR(i,0,n-1) cin>>vp[i].second;
        sort(vp.begin(),vp.end(),cmp);
        int i=0;
        for(int j=1; j<n; j++){
            if(vp[j].first >= vp[i].second)
                cnt++, i=j;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
