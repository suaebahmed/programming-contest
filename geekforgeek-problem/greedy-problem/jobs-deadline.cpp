#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;
/**
2
4
1 4 20 2 1 10 3 1 40 4 1 30
id       : 3  4  2  1
deadline : 1  1  1  4
profit   : 40 30 10 20

*/
struct Jobs
{
    int id,deadline,profit;
};
bool cmp(Jobs a,Jobs b)
{
    return (a.profit > b.profit);
}

void do_jobs(Jobs arr[],int n)
{
    sort(arr,arr+n,cmp);
    bool slot[n];
    int result[n];

    FOR(i,0,n-1) slot[i] = false,result[i] = 0;

    FOR(i,0,n-1)
    {
        for(int j=min(n,arr[i].deadline)-1; j>=0; j--)
        {
            if(slot[j]==false)
            {
                slot[j] = true;
                result[j] = i;
                break;
            }
        }
    }
    int ans = 0;
    FOR(i,0,n-1)
    {
        if(slot[i])
        {
            ans += arr[result[i]].profit;
        }
    }
    cout<<ans;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Jobs arr[n];
        FOR(i,0,n-1)
        {
            cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
        }
        do_jobs(arr,n);
        cout<<endl;
    }
    return 0;
}
