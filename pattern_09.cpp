#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        char ch='A';
        for(c=1;c<=2*r-1;c++)
        {
            cout<<ch;
            if(c<=(2*r-1)/2)
            ch++;
            else
            ch--;
        }
        cout<<endl;
    }
    return 0;
}
