#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007

int divisibleBy5(string N)
{
    int sum=0;
    for(int i=0; i<N.length(); i++){
        sum = (sum*10+N[i]-'0')%5;
    }
    if(sum%5==0) cout<<"Yes!"<<endl;
    else cout<<"No!"<<endl;
}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        divisibleBy5("98096894592782281781174736696345805");
    }
    return 0;
}
