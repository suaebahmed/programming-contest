#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
/*
10
-4 -2 0 4 5 -5 3 -3 -2 0
6
-3 -2 -1 -1 2 1

=> 1200
*/
int main(){
    optimize();
    ll T=1;
    cin>>T;
    while(T--)
    {
        ll fn;
        cin>>fn;
        vector<ll> posi,neg,zero;
        ll n = 0,m = 0,p = 0;

        ll prod = 1;
        if(fn == 5)
        {
            FOR(i,0,4)
            {
                ll x;
                cin>>x;
                prod *= x;
            }
            cout<<prod<<endl;
            continue;
        }
        else
        {
            FOR(i,0,fn-1)
            {
                ll x;
                cin>>x;
                if(x > 0)
                {
                    posi.push_back(x);
                    n++;
                }
                else if( x < 0)
                {
                    neg.push_back(x);
                    m++;
                }
                else
                {
                    zero.push_back(x);
                    p++;
                }
            }
        }

        sort(posi.begin(),posi.end(),greater<ll>());
        sort(neg.begin(),neg.end());

        FOR(i,0,n-1) cout<<posi[i]<<" ";
        FOR(i,0,m-1) cout<<neg[i]<<" ";

        cout<<endl;

        n = posi.size();
        m = neg.size();

        if(n+m >= 5)
        {
            ll three = 5;
            ll ni = 0;
            ll mi = 0;
            while(three>0)
            {
                if(three>0 && m >0 && abs(neg[mi])>=posi[ni])
                {
                    prod *= neg[mi];
                    m -= 1;
                    mi += 1;
                    three -= 1;
                }
                else if(three>0 && n>0)
                {
                    prod *= posi[ni];
                    ni++;
                    three--;
                    n--;
                }
                else if(three>0 && m>0)
                {
                    prod *= neg[mi];
                    m--;
                    mi++;
                    three--;
                }
                else
                {
                    break;
                }
            }
            cout<<prod<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
