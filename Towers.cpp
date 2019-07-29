#include<stdio.h>
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n;
    int a[2*100000+10];
    int ans[2*100000+10];
    int I=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        auto k=upper_bound(ans,ans+I,a[i])-ans;
        //cout<<k<<" "<<I<<endl;
        if(k<I)ans[k]=a[i];
        else
        {
            I++;
            ans[k]=a[i];
        }
    }
    /*for(int i=0;i<I;i++)
    {
        cout<<ans[i]<<" ";
    }*/
    printf("%d",I);
}
