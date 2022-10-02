#include<iostream>


using namespace std;


int main()
{
    int t,n,j,k;
    cin>>t;
    int m[t];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
            cin>>a[j];
        for(k=0; k<n; k++)
        {
            if(a[k]!=0)
            {
                for(j=0; j<n; j++)
                {
                    if(a[k]!=0 && k!=j)
                    {
                        if(a[k]<a[j])
                        {
                            a[k]=0;
                            a[j]-=a[k];
                        }
                        else
                        {
                            a[j]=0;
                            a[k]-=a[j];
                        }
                    }
                }
            }
        }
        for(j=0; j<n; j++)
        {
            if(a[j]!=0)
                break;
        }
        m[i]=j+1;
    }


    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}