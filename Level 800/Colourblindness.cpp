#include<iostream>


using namespace std;


int main()
{
    int t,n,j;
    cin>>t;
    string m[t];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        for(j=0; j<n; j++)
        {
            if((str1[j]=='R' && str2[j]!='R') || (str1[j]!='R' && str2[j]=='R'))
            {
                m[i]="NO";
                break;
            }   
        }
        if(j==n)
            m[i]="Yes";
    }


    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}