#include<bits/stdc++.h>
#define ll long long
#define ps() cout <<" ";
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    int k=0;
    int count=0;
    int l=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==x){
            //cout<<i+1<<endl;
            count++;
            continue;
        }
        while(sum>x&&l<=i)
        {
            sum-=a[l++];
        }
        if(sum==x){
            //cout<<i+1<<endl;
            count++;
            continue;
        }
    }
    cout<<count<<endl;
}
