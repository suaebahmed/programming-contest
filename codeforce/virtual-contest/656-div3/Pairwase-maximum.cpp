#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void print(int a,int b,int c)
{
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(max(x,y))
        {
            cout<<"YES"<<endl;
            print(x,y,z);
        }
        else if(max(x,z))
        {
            cout<<"YES"<<endl;
            print(x,y,z);
        }
        else if(max(y,z))
        {
            cout<<"YES"<<endl;
            print(x,y,z);
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
