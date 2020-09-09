#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
const int mx = 1000;
int a[mx];

int main(){
    optimize();
    ll d,t,s;
    cin>>d>>t>>s;
    if(t*s >= d)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
