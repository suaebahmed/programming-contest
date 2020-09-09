#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        ll min_a = a[0];
        ll min_b = b[0];

        for(int i=0; i<n; i++){
            if(min_a > a[i]) min_a = a[i];
        }
        for(int i=0; i<n; i++){
            if(min_b > b[i]) min_b = b[i];
        }

        //
        ll ans = 0;

        for(int i=0; i<n; i++)
        {
           ll ai = a[i]-min_a;
           ll bi = b[i]-min_b;

           if(ai==0 || bi==0) ans+=ai+bi;
           else if(ai == bi) ans += ai;
           else if(ai < bi){
                ans += (bi - ai);
                ans += ai;
           }
           else{
                ans += (ai-bi);
                ans += bi;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}
