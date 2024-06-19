#include<bits/stdc++.h>
using namespace std;
void p1(int n)
{
    int r,c;
    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        for(c=1; c<=2*(n-r); c++)
        {
            cout<<" ";
        }
        for(c=r; c>=1; c--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        for(c=1; c<=2*(n-r); c++)
        {
            cout<<" ";
        }
        for(c=r; c>=1; c--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
void p2(int n)
{
    int r,c;
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        for(c=1; c<=2*(n-r); c++)
        {
            cout<<" ";
        }
        for(c=r; c>=1; c--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        for(c=1; c<=2*(n-r); c++)
        {
            cout<<" ";
        }
        for(c=r; c>=1; c--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{
    int t,n;
    cout<<"Enter the number of test case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the number of rows : ";
        cin>>n;
        p1(n);
        cout<<endl<<endl;
        p2(n);
    }
    return 0;
}
