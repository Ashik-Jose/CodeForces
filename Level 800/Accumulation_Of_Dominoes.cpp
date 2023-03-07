#include<iostream>


using namespace std;


int main()
{
    unsigned long long int r,c,ans;
    cin>>r>>c;
    if(c==1)
        ans=r-1;
    else
    {
        ans=r*(c-1);
    }
    cout<<ans;
    return 0;
}