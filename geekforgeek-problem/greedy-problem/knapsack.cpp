#include<bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<= b; ++i)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define Ld long double

using namespace std;
typedef long long ll;

struct item
{
    int value,weight;
};

bool cmp(item a,item b)
{
    double r1 = (double) a.value / a.weight;
    double r2 = (double) b.value / b.weight;
    return (r1 > r2);
}

void fractionalKnapsack(int w,item arr[],int n)
{
    int loadedWeight = 0;
    double finalValue = 0.00;

    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        if(loadedWeight + arr[i].weight <= w)
        {
            loadedWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            double remain = w-loadedWeight;
            finalValue += arr[i].value*((double)remain/arr[i].weight);
        }
    }
    cout.precision(2);
    cout<<fixed<<finalValue<<endl;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,W=50;
        //cin>>n>>w;
        item arr[] = {{60,10},{100,20},{120,30}};
        n = sizeof(arr)/sizeof(arr[0]);
        fractionalKnapsack(W,arr,n);
    }
    return 0;
}
