#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            if((r%2==1&&c%2==1)||(r%2==0&&c%2==0))
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}
