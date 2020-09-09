#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double
typedef long long ll;
int a[10];
set<string> st;
vector<int> v;

int main(){
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        int myints[] = {10,20,30,30,20,10,10,20};
        vector<int> myvector (myints, myints+8);
        ll cnt = count (myvector.begin(), myvector.end(), 30);
        cout<<cnt<<endl;
    }
    return 0;
}
