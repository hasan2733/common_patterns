#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter outer number : ";
    cin>>n;
    for(r=0;r<2*n-1;r++)
    {
        for(c=0;c<2*n-1;c++)
        {
            int top=r;
            int down=(2*n-2)-r;
            int left=c;
            int right=(2*n-2)-c;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
    return 0;
}
