#include <iostream>

using namespace std;
int minsfunction(int n,int a[],int maxindex,int minindex)
{
    int min ;
    if(minindex==0)
        min = a[1];
    else
        min = a[0];
    for (int i = 1; i <n; i++)
    {
        if (a[i] < min && (i!=minindex && i!=maxindex) )
        {
            min = a[i];
        }
            
    }
    return min;
}

int maxsfunction(int n,int a[],int maxindex,int minindex)
{
    int max;
    int k=1;
    if(maxindex==0)
    {
         for (int i = 1; i <n; i++)
    {
        if ( (i!=minindex && i!=maxindex))
        {
            max = a[i];
            k=i;
            break;
        }
            
    }
    }
    else
        max = a[0];
     
    for (int i = k; i <n; i++)
    {
        if (a[i] > max && (i!=minindex && i!=maxindex))
        {
            max = a[i];
        }
            
    }
    return max;
}

int maxmfunction(int n, int a[])
{
    int max = a[0],maxindex=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            maxindex = i;
        }
            
    }
    return maxindex;
}

int minmfunction(int n, int a[])
{
    int min = a[0],minindex=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            minindex = i;
        }
            
    }
    return minindex;
}


int main()
{
    int t, n, i, k, maxm, minm, maxs, mins, l, r,lmax=0,rmax=0;
    
    cin >> t;
    int B[t], beauty = 0, pbeauty;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        for (k = 0; k < n; k++)
            cin >> a[k];
        // for (l = 1; l < n - 1; l++)
        // {
        //     for (r = l + 1; r < n; r++)
        //     {
        //         if (r - l + 1 < n - 1)
        //         {
        //             // maxm = maxmfunction(n,a,l,r);
        //             // minm = minmfunction(n,a,l,r);
        //             maxs=maxsfunction(l,r,a);
        //             mins = minsfunction(l,r,a);
        //             pbeauty = (maxs - mins);
        //             if (pbeauty > beauty)
        //             {
        //                 beauty = pbeauty;
        //                 lmax=l;
        //                 rmax=r;
        //             }
                        
        //         }
        //     }
        // }
        // maxm=maxmfunction(n,a,lmax,rmax);
        // minm = minmfunction(n,a,lmax,rmax);
        // beauty = beauty + (maxm-minm);
        maxm = maxmfunction(n,a);
        minm = minmfunction(n,a);
        maxs = maxsfunction(n,a,maxm,minm);
        mins = minsfunction(n,a,maxm,minm);
        // cout<<maxm<<" ";
        // cout<<minm<<"\n";
        // if(maxm<minm)
        // {
        //     maxs = maxsfunction(maxm+1,minm-1,a);
        //     mins = minsfunction(maxm+1,minm-1,a);
        // }
        // else
        // {
        //     maxs = maxsfunction(minm+1,maxm-1,a);
        //     mins = minsfunction(minm+1,maxm-1,a);
        // }
        // mins = minsfunction(1,n-2,a);
        // maxs = maxsfunction(1,n-2,a);
        beauty = (a[maxm]-a[minm]) + (maxs - mins);
        B[i] = beauty;
        // pbeauty = 0;
        // beauty = 0;
    }
    for (int i = 0; i < t; i++)
        cout << B[i] << "\n";
    return 0;
}
