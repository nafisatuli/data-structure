#include<bits/stdc++.h>
using namespace std;
int aa[1000],f=0,k;
void push()
{
    cout << "\nPush\n";
    f++;
    cin >> aa[f];
}
void pop()
{
    cout << "\nPop\n";
    k=aa[f];
    f--;
}
void display()
{
    cout << "\nQueue\n";
    for(int i=1;i<=f;i++)
        cout << aa[i] << " ";
    cout << "\nPop\n";
    cout << endl << k << " " << endl;
}
int main()
{
    int n;
    while (1)
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
