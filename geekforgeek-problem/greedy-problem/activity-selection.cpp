#include<bits/stdc++.h>

using namespace std;
const int mx = 6;
/**
6
5 9
1 2
3 4
0 6
5 7
8 9
*/
struct Activity
{
    int start,finish;
};
bool cmp(Activity a1,Activity a2)
{
    return (a1.finish < a2.finish);
}

void selection_problem(Activity arr[])
{
    sort(arr,arr+mx,cmp);
    int i=0;
    cout<<"( "<<arr[i].start<<" "<<arr[i].finish<<" )"<<endl;

    for(int j=1; j<mx; j++)
    {
        if(arr[j].start >= arr[i].finish)
        {
            cout<<"( "<<arr[j].start<<" "<<arr[j].finish<<" )"<<endl;
            i = j;
        }
    }
}

int main()
{
    Activity arr[mx];
    for(int i=0; i<mx; i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }
    selection_problem(arr);
    return 0;
}
