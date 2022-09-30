#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,k,j,maxim;
    cin>>t;
    unsigned long long int m[t];
    for(int i=0; i<t; i++)
    {
        unsigned long long int sum=0;
        cin>>n>>k;
        int a[n+1];
        for(j=1; j<=n; j++)
            cin>>a[j];
            for(j=1; j<=k; j++)
            {
                maxim = a[j];
                for(int z=j+k; z<=n; z=z+k)
                {
                    maxim = max(maxim,a[z]);

                }
                sum +=maxim;
            }
        m[i]=sum;
    }
    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}