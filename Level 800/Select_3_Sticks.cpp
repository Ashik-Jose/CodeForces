#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,small,j;
    cin>>t;
    int m[t];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        small=1000000000;
        for(j=0; j<n; j++)
        {
            cin>>a[j];    
        }
        sort(a,a+n);
        for(j=2; j<n; j++)
            small=min(small,a[j]-a[j-2]);

       m[i]=small;
            
    }
    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}