#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define ps() cout<<" ";

/**  '' "\n" ^ **/
vector<ll> a(200001);
vector<ll> tree(800001);
int n,q;

void build(int node,int s,int e)
{
    //cout<<s;ps();cout<<e;
    if(s==e)
    {
        //ps();
      //  cout<<a[s]<<endl;
        tree[node]=a[s-1];
        return;
    }
//    cout<<endl;
    int mid=(s+e)/2;
    build(node*2,s,mid);
    build((node*2)+1,mid+1,e);
    tree[node]=min(tree[2*node],tree[(2*node)+1]);
    //cout<<node;ps();cout<<tree[node];ps();cout<<tree[2*node];ps();cout<<tree[2*node+1]<<endl;
    return;
}

ll search(int node,int s,int e,int l,int r)
{
    //cout<<s;ps();cout<<e;ps();cout<<l;ps();cout<<r;
    if(l<=s&&e<=r)
    {
        //ps();
        //cout<<tree[node]<<endl;;
        return tree[node];
    }
    //cout<<endl;
    if(s>r||e<l)
    {
        return 9999999999999;
    }
    int mid=(s+e)/2;
    return min(search(node*2,s,mid,l,r),search((node*2)+1,mid+1,e,l,r));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build(1,1,n);
    /*for(int i=0;i<n*4;i++)
    {
        cout<<tree[i];;ps();
    }
    cout<<endl;*/
    int x,y;
    while(q--)
    {
        cin>>x>>y;
        cout<<search(1,1,n,x,y)<<endl;
    }

}
