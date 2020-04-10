#include<bits/stdc++.h>
using namespace std;
int aa[10000],f=0,r=1,k;
void push()
{
    cout << "\nPush\n";
    f++;
    cin >> aa[f];
}
void pop()
{
    cout << "\nPop\n";
    k=aa[r];
    r++;
}
void display()
{
   cout << "\n Queue \n";
   for(int i=r;i<=f;i++) cout << aa[i] << " ";
   cout << "\nPop delete value \n ";
   cout << k;
}
int main()
{
    int n;
    while(1)
    {
       cin >> n;
       if(n==1)push();
       else if(n==2)pop();
       else if(n==3)display();
       else
       {
           cout << "Error" << endl;
           continue;
       }
    }
}
