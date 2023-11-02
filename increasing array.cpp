#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    long long c=0;
    for (int i=1;i<n;i++)
    {
        if (x[i]>=x[i-1])
        {
            continue;
        }
        else
        {
            while(x[i]<x[i-1])
            {
            c+=1;
            x[i]=x[i]+1;
            }
        }
    }
    cout<<c;
}