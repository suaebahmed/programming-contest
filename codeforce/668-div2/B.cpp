#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.fi < b.fi) return 1;
    return 0;
}

void solv()
{
            ll n;
        cin>>n;
        vector<pair<ll,ll>> vj;
        vector<pair<ll,ll>> vi;

        for(int i=0; i<n; i++)
        {
            ll el;
            cin>>el;
            if(el < 0)
            {
                vj.push_back(make_pair(i,el));
            }
            else if(el > 0)
            {
                vi.push_back(make_pair(i,el));
            }
        }
        ll nj = vj.size();
        ll ni = vi.size();
        sort(vj.begin(),vj.end(),cmp);
        sort(vi.begin(),vi.end(),cmp);

        for(int j=0; j<nj; j++)
        {
            for(int i=0; i<ni; i++)
            {
                if(vj[j].fi > vi[i].fi)
                {
                    if(abs(vj[j].se) < vi[i].se)
                    {
                        int t = vi[i].se-abs(vj[j].se);
                        vi[i].se = t;
                        vj[j].se = 0;
                    }
                    else if(abs(vj[j].se) > vi[i].se)
                    {
                        // 2+(-5)
                        int t = vi[i].se+vj[j].se;
                        vj[j].se = t;
                        vi[i].se = 0;
                    }
                    else
                    {
                        vj[j].se = 0;
                        vi[i].se = 0;
                    }
                }
                else break;
            }
        }

        ll coins = 0;
        //for(auto vl: vj) cout<<vl.fi<<" "<<vl.se<<endl;
        for(auto vl: vj)
        {
            coins += abs(vl.se);
        }
        cout<<coins<<endl;
}

int main(){
    optimize();
    ll T;
    cin>>T;
    while(T--)
    {
        //float x = 3.30f;
        float x = 3.30F;
        ll y = 3LL;

        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
