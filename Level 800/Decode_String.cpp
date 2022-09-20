#include<iostream>
#include<string>

using namespace std;


int main()
{
    int q,n,k;
    cin>>q;
    string s[q],t;
    for(int i=0; i<q; i++)
    {
        k=0;
        cin>>n;
        cin>>t;
        for(int j=0; j<n; j++)
        {
            if((j+3)<n && t[j+2]=='0' && t[j+3]!='0')
            {
                k=((t[j]-48)*10)+(t[j+1]-48);
                s[i]+=(96+k);
                j=j+2;
            }
            else if((j+3)>=n && (j+2)<n && t[j+2]=='0')
            {
                k=((t[j]-48)*10)+(t[j+1]-48);
                s[i]+=(96+k);
                j=j+2;
            }
            else
            {
                s[i]+=t[j]+48;
            }
        }
    }
    for(int i=0; i<q; i++)
    {
        cout<<s[i]<<"\n";
    }
    return 0;
}