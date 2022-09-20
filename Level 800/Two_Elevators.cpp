#include<iostream>
#include<cstdlib>

using namespace std;


int main()
{
    int t,a,b,c,A[3],k,d;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        A[i]=0;
        //d=a;
        k=abs(b-c)+c;
        if(a<=k)
            A[i]+=1;
        if(a>=k)
            A[i]+=2;
        //k=b>c ? b-1 : c+b-1;
        // k+=c-1;
        //k=b-1;
        // if(b>=c)
        //     k=b-1;
        // else
        //     k=b+c-1;
        // //k=b+c-1;
        // if(a-1 < k || a==1)
        //     A[i]=1;
        // else if (a-1>k)
        //     A[i]=2;
        // else if(a-1==k)
        //     A[i]=3;
        // else
        //     A[i]=3;
        // else if(b>c)
        // {
        //     if(a-1)
        // }
        // if(a==1 || a<=c)
        //     A[i]=1;
        // else
        // {
        //     if(b-1 )
        //         A[i]
        // }

    }
    for(int i=0; i<t; i++)
        cout<<A[i]<<"\n";
    return 0;
}