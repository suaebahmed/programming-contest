#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>
#include <cstdio>
#include <bitset>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define fi first
#define se second
#define db double
#define U unsigned
#define P std::pair<int,int>
#define LL long long
#define pb push_back
#define MP std::make_pair
#define all(x) x.begin(),x.end()
#define CLR(i,a) memset(i,a,sizeof(i))
#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define DEBUG(x) std::cerr << #x << '=' << x << std::endl

using namespace std;

//
#define all(v) (v).begin(), (v).end()
int n;
vector<int> v;

void solve_tc(){
    cin >> n;
    v.clear();
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        v.emplace_back(x);
    }
    sort(all(v));
    for(int i=1; i<n; ++i){
        if(abs(v[i-1] - v[i]) > 1){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}


const int MAXN = 50+5;
int a[MAXN],n;

int main(){
    int T;scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        FOR(i,1,n) scanf("%d",a+i);
        //std::sort(a+1,a+n+1);

        FOR(i,0,n+5){
            cout<<a[i]<<" ";
        }

        bool flag = 1;
        FOR(i,1,n-1){
            if(std::abs(a[i]-a[i+1]) > 1){
                    cout<<"inner side"<<endl;
                    flag = 0;
                    break;
            }

        }
        puts(flag?"YES":"NO");
    }
    return 0;
}
