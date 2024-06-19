#include<bits/stdc++.h>
using namespace std;
void p1(int n)
{
    int r,c;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void p2(int n)
{
    int r,c;
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void diamond_p(int n)
{
    int r,c;
    for(int r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(int c=1;c<=2*r-1;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(int c=1;c<=2*r-1;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int t,n;
    cout<<"Enter number of test case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter number of rows : ";
        cin>>n;
        p1(n);
        cout<<endl;
        p2(n);
        cout<<endl;
        diamond_p(n);
    }
    return 0;
}
