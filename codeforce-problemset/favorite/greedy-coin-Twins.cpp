#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define FORJ(j,a,b) for(int j=a; j<= b; ++j)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 26;
int a[MAXN];

bool cmp(int i,int j)
{
    if(i>j) return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    ll sum = 0;

    FOR(i,0,n-1){
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end(),cmp);  // by default increasing order
    int ans = 0;
    int myTaka = 0;
    FOR(i,0,n-1)
    {
        myTaka += v[i];
        ans++;
        if(myTaka > (sum-myTaka))
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
