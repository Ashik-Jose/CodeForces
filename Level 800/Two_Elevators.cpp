#include<iostream>
#include<cstdlib>

using namespace std;


int main()
{
    int t,a,b,c,k,d;
    cin>>t;
    int A[t];
    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            A[i]=1;
            continue;
        }
            
        A[i]=0;
        k=abs(b-c)+c;
        if(a<=k)
            A[i]+=1;
        if(a>=k)
            A[i]+=2;

    }
    for(int i=0; i<t; i++)
        cout<<A[i]<<"\n";
    return 0;
}