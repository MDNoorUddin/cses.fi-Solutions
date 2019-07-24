#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION\n";
        return 0;
    }
    if(n==4)
    {
        cout<<2<<" "<<4<<" "<<1<< " "<<3;
        return 0;
    }
    for(int i=n/2,j=n;i>0;i--,j--)
    {
        cout<<j<<" "<<i<<" ";
    }
    if(n%2!=0)cout<<n/2+1;
}
