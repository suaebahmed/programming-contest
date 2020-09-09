#include<bits/stdc++.h>

#define fi first
#define se second
#define db double
#define U unsigned
#define P std::pair<int,int>
#define LL long long
#define pb push_back
#define MP std::make_pair
#define CLR(i,a) memset(i,a,sizeof(i))
#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define DEBUG(x) std::cerr << #x << '=' << x << std::endl

using namespace std;

#define all(v) (v).begin(), (v).end()
typedef long ll;

vector<int> v;

const int MAXN = 50+5;
int a[MAXN];

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        FOR(i,0,n-1) cin>>v[i];

        bool flag = 1;
        sort(all(v));
        for(int i=0; i<n-1; i++)
        {
            if(abs(v[i]-v[i+1]) > 1)
            {
                flag=0;
                break;
            }
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}
