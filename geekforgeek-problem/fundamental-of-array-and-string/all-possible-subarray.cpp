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

void printArray(int arr[],int k,int n)
{
    cout<<"{ ";
    for(int i=k; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" }\n";
}
void printSubarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printArray(arr,i,j);
        }
    }
}

int main(){
    optimize();
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubarray(arr,n);
    return 0;
}
