#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100],bb[100],cc[100];
    int n,m,i,k,j;
    cin >> n;
    for(i=0;i<n;i++)cin >> aa[i];
    cin >> m;
    for(i=0;i<m;i++)cin >> bb[i];
    i=0;j=0;k=0;
    while(i<n||j<m)
    {
        if(aa[i]<=bb[j])
        {
            cc[k]=aa[i];
            k++;i++;
        }
        else if(aa[i]>bb[j])
        {
            cc[k]=bb[j];
            k++;j++;
        }
        cout << i;
        if(i>=n)
        {
            cc[k]=bb[j];
            k++;j++;
        }
        else
        {
            cc[k]=aa[i];
            i++;k++;
        }
    }
    cout << i <<" "<<j<<" "<<k<< endl;
    for(i=0;i<n+m;i++)
        cout << cc[i]<< " ";
}
