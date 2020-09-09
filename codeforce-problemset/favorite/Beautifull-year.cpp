#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define FORJ(j,a,b) for(int j=a; j<= b; ++j)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 26;
int a[MAXN];

void other_code()
{
    int n,a,b,c,d;
    cin>>n;
    do n++,a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
        while(a==b||a==c||a==d||b==c||b==d||c==d);
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;
    set<int> st;
    while(st.size()!=4)
    {
        st.clear();
        int y = ++n;
        while(y)
        {
            int lastOne = y%10;
            st.insert(lastOne);
            y/=10;
        }
    }
    cout<<n<<endl;
    return 0;
}
