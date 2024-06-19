#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r,k=1;
    cout<<"Enter the number of rows ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
