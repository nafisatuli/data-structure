#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100],bb[100],cc[100];
    int n,m,i,j,k=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> aa[i];
    }
    cin >> m;
    for(j=0;j<m;j++)
    {
        cin >> bb[j];
    }
    i=0;j=0;
    while(i<n&&j<m)
    {
        if(aa[i]<bb[j])
        {
            cc[k]=aa[i];
            i++;k++;
        }
        else
        {
            cc[k]=bb[j];
            j++;k++;
        }
    }
    if(i>=n)
    {
        while(j<m)
        {
            cc[k]=bb[j];
            j++;k++;
        }
    }
    if(j>=m)
    {
        while(i<n)
        {
            cc[k]=aa[i];
            i++;k++;
        }
    }
    for(i=0;i<n+m;i++)
    {
        cout << cc[i] <<" ";
    }
}
