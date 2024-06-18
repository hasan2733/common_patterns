#include<bits/stdc++.h>
using namespace std;
void p1(int n)
{
    int r,c;
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
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
        for(c=1;c<=r;c++)
        {
            cout<<c<<" ";
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
        cout<<"Enter the numbers of row : ";
        cin>>n;
        p1(n);
        cout<<endl;
        p2(n);
    }
    return 0;
}
