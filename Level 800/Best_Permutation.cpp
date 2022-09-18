#include<iostream>

using namespace std;

int main()
{
    int t,n,j,k;
    cin>>t;
    int A[t][110],N[100];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            for(j=0,k=n-2; j<n-1; j++,k--)
                A[i][j] = k;
        }
        if(n%2)
        {
            for(j=0,k=n-2; j<n-5; j++,k--)
                A[i][j] = k;
            A[i][n-5]=1;
            A[i][n-4]=2;
            A[i][n-3]=3;
        }
        A[i][n-2]=n-1;
        A[i][n-1]=n;
        N[i]=n;
    }
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<N[i]; j++)
            cout<<A[i][j]<<" ";
        cout<<"\n";
    }     

    return 0;
}