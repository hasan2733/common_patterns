#include<bits/stdc++.h>
using namespace std;
//same as pattern 2
void p1(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }

}
void p2(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<r<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t,n;
    cout<<"Enter test case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the number of rows : ";
        cin>>n;
        p1(n);
        cout<<endl;
        p2(n);
    }
    return 0;
}
