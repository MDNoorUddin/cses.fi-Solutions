#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define in(n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vp vector<pair<int,int> >
#define vs vector<string>
#define sort(a) sort(a.begin(),a.end())
 
int main()
{
    int n;
    sf(n);
    vi a(n);
    in(n)
    {
        sf(a[i]);
    }
    sort(a);
    ll sum=0;
    in(n)
    {
        if(i!=n/2)
        {
            sum+=abs(a[n/2]-a[i]);
        }
    }
    ll sum1=9999999999999;
    if(n%2==0)
    {
        sum1=0;
        in(n)
        {
            sum1+=abs(a[n/2-1]-a[i]);
        }
    }
    if(sum1<sum)cout<<sum1<<'\n';
    else cout<<sum<<endl;
}
