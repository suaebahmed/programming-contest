#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
const int mx = 1001;
int a[mx];
vector<int> v;

int main(){
    optimize();
    string s,t;
    cin>>s>>t;
    int n = s.length(),m = t.length();
    int cnt = 0;
    int mn = n;

    for(int i=0; i<=(n-m); i++){
        for(int j=0; j<m; j++){
            if(s[i+j] != t[j]){
                cnt++;
            }
        }
        mn = min(mn,cnt);
        cnt = 0;
    }
    cout<<mn<<endl;
    return 0;
}
