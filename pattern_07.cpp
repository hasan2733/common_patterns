#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        for(c=1;c<=2*(n-r);c++)
        {
            cout<<" ";
        }
        for(c=r;c>=1;c--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
