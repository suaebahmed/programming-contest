#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll k;
    cin>>k;
    if(k%2==0 || k%5==0){
        cout<<-1<<endl;
        return 0;
    }
    int ans = 1,sum = 7,curr;
    curr = sum % k;
    while(curr!=0)
    {
        sum = sum*10+7;
        curr = sum%k;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}
