#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
const int MAXN = 1001;
int a[MAXN];

int main(){

    int n;
    cin>>n;

    int arr[n][3];
    int k=0;
    FOR(i,0,n-1)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j])
            {
                a[k]++;
            }
        }
        k++;
    }
    int ans = 0;
    FOR(i,0,n-1)
    {
        if(a[i] >= 2) ans++;
    }
    cout<<ans<<endl;

    return 0;
}
