#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100],n,i,j,x;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> aa[i];
    }
    for(i=1; i<n; i++)
    {
        x=aa[i];
        j=i;
        while(j>0 and aa[j-1]>x)
        {
            aa[j]=aa[j-1];
            j--;
        }
        aa[j]=x;
    }
    for(i=0; i<n; i++)
        cout << aa[i] << " ";
}
