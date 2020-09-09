#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

ll count_digit(ll n)
{
    ll cnt = 0;
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
ll s(ll cnt)
{
    ll mult=1;
    while(cnt>0)
    {
        mult *= 10;
        cnt--;
    }
    return mult;
}
ll digit_sum(ll n)
{
    ll sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll d_s = digit_sum(a);
        if(d_s <= b)
        {
            cout<<0<<endl;
            continue;
        }
        //cout<<"sum of digit: "<<d_s<<endl;

        ll cnt = count_digit(a);
        ll n = s(cnt);
        cout<<n-a<<endl;
    }
    return 0;
}
