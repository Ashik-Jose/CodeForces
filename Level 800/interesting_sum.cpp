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
        maxm = maxmfunction(n,a);
        minm = minmfunction(n,a);
        maxs = maxsfunction(n,a,maxm,minm);
        mins = minsfunction(n,a,maxm,minm);
        beauty = (a[maxm]-a[minm]) + (maxs - mins);
        B[i] = beauty;
    }
    for (int i = 0; i < t; i++)
        cout << B[i] << "\n";
    return 0;
}
