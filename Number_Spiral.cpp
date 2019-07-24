#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(y%2==0)
        {
            ll b=(y-1)*(y-1);
            if(x<=y)
            {
                cout<<(b)+x<<endl;
            }
            else
            {
                if(x%2!=0)
                {
                    x--;
                    x=x*x;
                    cout<<x+y<<endl;
                }
                else
                {
                    x=x*x;
                    cout<<x-(y-1)<<endl;
                }
            }
        }
        else
        {
            ll b=(y)*(y);
            if(x<=y)
            {
                cout<<(b)-(x-1)<<endl;
            }
            else
            {
                if(x%2!=0)
                {
                    x--;
                    x=x*x;
                    cout<<x+y<<endl;
                }
                else
                {
                    x=x*x;
                    cout<<x-(y-1)<<endl;
                }
            }
        }
    }
}
