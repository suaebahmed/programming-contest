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
/**
cabacc
abc
1
*/
int main(){
    optimize();
    string s,t;
    cin>>s>>t;
    int n = s.length(),m = t.length();

    ll cnt = 0;
    for(int i=0; i<=(n-m); i++){
        for(int j=0; j<m; j++){
            if(s[i+j] != t[j]){
                cnt++;
            }
        }
        v.push_back(cnt);
        cnt = 0;
    }
    int mn = 1005;
    for(auto v1: v){
        if(mn > v1) mn = v1;
    }
    cout<<mn<<endl;
    return 0;
}
