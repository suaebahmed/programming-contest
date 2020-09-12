#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double
typedef long long ll;
set<string> st;
vector<int> v;

ll d,t,f,a[2000],b[2000],c[2000];
ll i;
/*
2 5
4 6
0 0
*/
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

        /// -----------  before an Exam || contest/4/problem/B    ---------------
        cin>>d>>t;
        for(i=0;i<d;i++) cin>>a[i]>>b[i];
        for(i=0;i<d;i++){
            f=t;
            t-=a[i];
            c[i]=f-t; /// store in result
            if(t<0){cout<<"NO";return 0;}
        }
        for(i=0;i<d && t>0;i++){
            f=t;
            if(t>(b[i]-a[i])) t-=(b[i]-a[i]);
            else t=0;
            c[i]+=(f-t);
            if(i+1==d && t>0){cout<<"NO";return 0;}
        }
        cout<<"YES"<<endl;
        for(i=0;i<d;i++) cout<<c[i]<<" ";
    }
    return 0;
}
