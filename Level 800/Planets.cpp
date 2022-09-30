#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,c,j,prev;
    cin>>t;
    int m[t];
    for(int i=0; i<t; i++)
    {
        int score=1,countorb=1,count=1;
        cin>>n>>c;
        int a[n];
        for(j=0; j<n; j++)
            cin>>a[j];
        sort(a,a+n);
        prev=a[0];
        for(j=0; j<n; j++)
            cout<<a[j]<<" ";
        for(j=1; j<n; j++)
        {          
            if(a[j]==prev)
            {
               // score=score-1+c;
                count++;
            }
            // else if(a[j]==prev && count!=1)
            //     count++;
            else if(a[j]!=prev)
            {
                if(count>1)
                {
                    if(count<c)
                        score=score-1+count;
                    else
                        score=score-1+c;
                }
                score++;
                countorb++;
                count=1;
            }
            if(count>1 && j==n-1)
            {
                if(count<c)
                    score=score-1+count;
                else
                    score=score-1+c;
            }
            prev=a[j];
        }
        cout<<"Score1: "<<score<<"\n";
        if(score>n)
            score=n;
        cout<<"Score2: "<<score<<"\n";    
        if(score>(c*countorb))
            score = c*countorb;
        cout<<"Score3: "<<score<<"\n";
        m[i] = score;
    }
    for(int i=0; i<t; i++)
        cout<<m[i]<<"\n";
    return 0;
}