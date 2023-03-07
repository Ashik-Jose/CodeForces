#include<iostream>
#include<set>

using namespace std;


int main()
{
    int t,n,j;
    cin>>t;
    string m[t];
    for(int i=0; i<t; i++)
    {
        cin>>n;
        string str;
        cin>>str;
        if(n!=5)
        {
            m[i]="NO";
            continue;
        }
        m[i]="Yes";

        set<char> timur{begin(str),end(str)};
        set<char>::iterator it;
        if(timur.size()!=5)
        {
            m[i]="NO";
            continue;
        }
            for (it=timur.begin(); it!=timur.end(); ++it)
            {
                switch(*it)
                {
                    case 'T':
                    case 'i':
                    case 'm':
                    case 'u':
                    case 'r': break;
                    default: m[i]="NO";break;
                }
                if(m[i]=="NO")
                    break;

            }
    }
    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}