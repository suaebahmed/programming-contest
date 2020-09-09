#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
int a[101];
set<string> st;
vector<int> v;

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(n == 2)
        {
            cout<<x<<" "<<y<<endl;
            continue;
        }
        else
        {
            int diff = y-x;
            int incre;
            for(int i=n-1; i>=1; i--)
            {
                if(diff%i == 0)
                {
                    incre = diff/i;
                    break;
                }
            }
            // print middle element of array
            for(int i=x; i<=y; i+=incre)
            {
                cout<<i<<" ";
                n--; // n = 0 ->> 6 20 50
            }
            // print x before element of array
            for(int i=x-incre; i>=1 && n>0; i-=incre)
            {
                cout<<i<<" ";
                n--;
            }
            // print y after element of array
            for(int i=y+incre; n>0; i+=incre)
            {
                cout<<i<<" ";
                n--;
            }
            cout<<endl;
        }
    }
    return 0;
}
